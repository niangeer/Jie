#include <iostream>
#include <string>
using namespace std;

//string:��char����ʵ���� basic_stringģ�����

////string ���캯��
//int main()
//{
//	string s0("Init string");
//	string s1;                        //�޲ι��캯�������Ϊ���ַ�������'\0'��  //string();
//	string s2(s0);                    //�������캯��                            //string(const string& str);
//	string s3(s0, 2, string::npos);   //���±�Ϊ2�����������                   //string(const string& str,size_t pos,size_t len=npos);
//	string s4("hello world");         //���ַ�����ʼ������                      //string(const char* s);
//	string s5("hello world", 7);      //�����ַ����е�ǰ7���ַ�                 //string(const char* s,size_t n);
//	string s6(10,'C');               //����10��'C'�ַ�                          //string(size_t n,char c);
//	
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//	system("pause");
//	return 0;
//}

////string ��ֵ���������
//int main()
//{
//	string s0("Init string");
//	string s1("hello bit"); 
//	s0 = s1;                            //��һ��s1��ֵ��s0      //string& operator=(const string& str);
//	cout << s0 << "\n" << s1 << endl;   //���Ϊ hello bit\0
//
//	s0 = "cd";                          //���ַ�����ֵ��s0      //string& operator=(const char* s);
//	cout << s0 << endl;                 //���Ϊ cd\0
//	 
//	s0 = 'a';                           //���ַ���ֵ��s0        //string& operator=(char c);
//	cout << s0 << endl;                 //���Ϊ a\0
//
//	system("pause");
//	return 0;
//}


////string ���������ӿ�
//int main()
//{
//	string s0("Init string");
//
//	cout << s0.size() << endl;   //��ЧԪ�صĸ���
//	cout << s0.capacity() << endl;  //������С
//	cout << s0.empty() << endl;  //�Ƿ�Ϊ��
//	//s0.clear();                  //�����Ч����
//
//	s0.resize(5,'a');            //����ЧԪ�ظ���5����������5��������'a'�����5��
//	cout << s0 << endl;
//	s0.resize(20);               //����ȱʡֵ'\0'   resize������������ʱ�����Զ�����
//	cout << s0 << endl;
//
//	//reserve:Ԥ���ռ��С
//	string s1("12411111412414adadasdasada");   //reserve����С��string�ĵײ�ռ��Сʱ�����Ὣ�ռ���С
//	s1.reserve(5);
//	cout << s1 << endl;
//
//	system("pause");
//	return 0;
//}

////�ַ�����
//int main()
//{
//	string s0("Hello");
//	const string s1("hello");
//	cout << s0 << "\n" << s1 << endl;
//
//	//operator[]   []���������أ�����posλ�õ��ַ�
//	s0[0] = 'h';
//	cout << s0 << endl;
//
//	//s1[0] = 'H';     //const���Ͷ������޸�
//
//	system("pause");
//	return 0;
//}

////string �����ֱ���
//int main()
//{
//	string s("Init string,hello bit");
//	
//	//1��for+operator[]   []���������أ�����posλ�õ��ַ�������ֵΪchar& :1,֧��������õĵط��޸ķ��ض���  2�����ٿ���
//	for (size_t i = 0; i < s.size(); i++)
//	{
//		cout << s[i];
//	}
//	cout << endl;
//
//	//2����������iterator���������ͣ����򡢷���const����const����
//	string::iterator it= s.begin();   //��������end��ȡ���һ���ַ���һ��λ�õĵ�����
//	//auto it = s.begin();            //auto �Զ��Ƶ����ͣ��Զ��Ƶ��˵���������
//	while (it != s.end())
//	{
//		cout << *it;
//		it++;
//	}
//	cout << endl;
//
//	//3����Χfor
//	for (auto e : s)
//	{
//		cout << e;   //��ӡe
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//�޸Ĳ���
int main()
{
	string s0("Hello");

	//operator += : +=����������
	s0 += " world";     //�ɼ��ַ���,�൱��append
	//s0.append(" Bit");
	cout << s0 << endl;

	s0 += '!';          //�ɼ��ַ�,�൱��push_back
	//s0.push_back('!');
	cout << s0 << endl;

	s0.push_back('\0');
	s0.push_back('\0');
	s0 += "Hello bit";
	cout << s0 << endl;        //��'\0'Ҳһ���ӡ

	cout <<s0.c_str() << endl;  //c_str:��C���Եķ�ʽ��ӡ�ַ���,��'\0'��ֹͣ

	system("pause");
	return 0;
}
