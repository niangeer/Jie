/*    文件IO流 
      1. 定义一个文件流对象
          ifstream ifile(只输入用)
          ofstream ofile(只输出用)
          fstream iofile(既输入又输出用)
      2. 使用文件流对象的成员函数打开一个磁盘文件，使得文件流对象和磁盘文件之间建立联系
      3. 使用提取和插入运算符对文件进行读写操作，或使用成员函数进行读写
      4. 关闭文件    */

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct ServerInfo    //服务器信息
{
	char _ip[12];    //ip
	int _port;       //端口
};

struct ConfigManager //配置文件管理
{
public:
	ConfigManager(const char* filename = "jzhserver.config")
		:_configfile(filename)
	{}

	//二进制读写
	void WriteBin(const ServerInfo& info)
	{
		ofstream ofs(_configfile);
		ofs.write((const char*)&info, sizeof(ServerInfo));
		ofs.close();
	}
	void ReadBin(ServerInfo& info)
	{
		ifstream ifs(_configfile);
		ifs.read((char*)&info, sizeof(ServerInfo));
		ifs.close();
	}

	//文本读写
	void WriteTest(const ServerInfo& info)
	{
		ofstream ofs(_configfile);
		ofs << info._ip << endl;
		ofs << info._port << endl;
		ofs.close();
	}
	void ReadTest(ServerInfo& info)
	{
		ifstream ifs(_configfile);
		ifs >> info._ip;
		ifs >> info._port;
		ifs.close();
	}
private:
	string _configfile; //配置文件
};
int main()
{
	ServerInfo myInfo = { "192.168.1.1", 8000 };
	ServerInfo yourInfo;

	//二进制读写
	ConfigManager cm;
	cm.WriteBin(myInfo);	
	cm.ReadBin(yourInfo);
	cout << yourInfo._ip << endl;
	cout << yourInfo._port << endl;

	//文本读写
	ConfigManager textCm("Text");
	textCm.WriteTest(myInfo);
	textCm.ReadTest(yourInfo);
	cout << yourInfo._ip << endl;
	cout << yourInfo._port << endl;
	system("pause");
	return 0;
}