/*    �ļ�IO�� 
      1. ����һ���ļ�������
          ifstream ifile(ֻ������)
          ofstream ofile(ֻ�����)
          fstream iofile(�������������)
      2. ʹ���ļ�������ĳ�Ա������һ�������ļ���ʹ���ļ�������ʹ����ļ�֮�佨����ϵ
      3. ʹ����ȡ�Ͳ�����������ļ����ж�д��������ʹ�ó�Ա�������ж�д
      4. �ر��ļ�    */

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct ServerInfo    //��������Ϣ
{
	char _ip[12];    //ip
	int _port;       //�˿�
};

struct ConfigManager //�����ļ�����
{
public:
	ConfigManager(const char* filename = "jzhserver.config")
		:_configfile(filename)
	{}

	//�����ƶ�д
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

	//�ı���д
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
	string _configfile; //�����ļ�
};
int main()
{
	ServerInfo myInfo = { "192.168.1.1", 8000 };
	ServerInfo yourInfo;

	//�����ƶ�д
	ConfigManager cm;
	cm.WriteBin(myInfo);	
	cm.ReadBin(yourInfo);
	cout << yourInfo._ip << endl;
	cout << yourInfo._port << endl;

	//�ı���д
	ConfigManager textCm("Text");
	textCm.WriteTest(myInfo);
	textCm.ReadTest(yourInfo);
	cout << yourInfo._ip << endl;
	cout << yourInfo._port << endl;
	system("pause");
	return 0;
}