#include <iostream>
#include <sstream>
using namespace std;

//将数值类型数据格式化为字符串
void test1()
{
	int a = 9;
	string sa;  
	stringstream ss;
	ss << a;        //将整型输入ss时不会转为字符串，存什么就是什么，输出为字符串的原因是string类型自带'\0';
	ss >> sa;	
	cout << "sa: " << sa << endl;

	string str("124");
	ss.clear();              //多次转换时，必须使用clear将上次转换状态清空掉
	ss << str;               //clear()不会将stringstreams底层字符串清空掉
	cout << "ss.str(): " << ss.str() << endl;
	ss.str("");              //ss.str("")将stringstream底层管理string对象设置成""
	cout << "ss.str(): " << ss.str() << endl;
	ss.clear();              //清空，否则无法转化

	double d = 11.21;
	ss << d;
	string sVal;
	sVal = ss.str();         //str()返回值：返回stringsteam中管理的string类型
	cout << "sVal: " << sVal << endl;
}

//字符串拼接
void test2()
{
	stringstream ss;
	ss << "hello" << " " << "world" << endl;
	ss << "hello" << endl;
	cout << "strResult is: " << ss.str() << endl;  //可存储'\n',将其当成特殊字符存储，读取遇到它时转换成'\n'
	
	ss.str("");
	ss << "byte";
	cout << ss.str() << endl;
}

//字符串分割
void test3()
{
	stringstream ss("hello world,\nhelloC++"); //遇到空格或回车进行分割
	string str1;
	string str2;
	string str3;
	string str4;
	ss >> str1;
	ss >> str2;
	ss >> str3;
	ss >> str4;
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;
	cout << "str4: " << str4 << endl;
}
int main()
{
	test1();
	test2();
	test3();
	system("pause");
	return 0;
}