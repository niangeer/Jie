#include <iostream>
#include <sstream>
using namespace std;

//����ֵ�������ݸ�ʽ��Ϊ�ַ���
void test1()
{
	int a = 9;
	string sa;  
	stringstream ss;
	ss << a;        //����������ssʱ����תΪ�ַ�������ʲô����ʲô�����Ϊ�ַ�����ԭ����string�����Դ�'\0';
	ss >> sa;	
	cout << "sa: " << sa << endl;

	string str("124");
	ss.clear();              //���ת��ʱ������ʹ��clear���ϴ�ת��״̬��յ�
	ss << str;               //clear()���Ὣstringstreams�ײ��ַ�����յ�
	cout << "ss.str(): " << ss.str() << endl;
	ss.str("");              //ss.str("")��stringstream�ײ����string�������ó�""
	cout << "ss.str(): " << ss.str() << endl;
	ss.clear();              //��գ������޷�ת��

	double d = 11.21;
	ss << d;
	string sVal;
	sVal = ss.str();         //str()����ֵ������stringsteam�й����string����
	cout << "sVal: " << sVal << endl;
}

//�ַ���ƴ��
void test2()
{
	stringstream ss;
	ss << "hello" << " " << "world" << endl;
	ss << "hello" << endl;
	cout << "strResult is: " << ss.str() << endl;  //�ɴ洢'\n',���䵱�������ַ��洢����ȡ������ʱת����'\n'
	
	ss.str("");
	ss << "byte";
	cout << ss.str() << endl;
}

//�ַ����ָ�
void test3()
{
	stringstream ss("hello world,\nhelloC++"); //�����ո��س����зָ�
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