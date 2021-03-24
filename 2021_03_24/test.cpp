#include <iostream>
#include <string>

#pragma warning(disable:4996)

using namespace std;

namespace jzh
{
	class string
	{
	public:
		//���캯������Ҫʹ�������
		string(const char* s = "") 
			:_str(new char[strlen(s) + 1])
		{
			strcpy(_str, s);
		}
		//�������캯��
		string(const string& s)
		{
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		//��������
		~string()
		{
			delete[] _str;
			_str = nullptr;
		}
		//��ֵ���������
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[strlen(s._str) + 1];
				strcpy(_str, s._str );
			}
			return *this;
		}

		// []����������
		char& operator[](size_t i)
		{
			return _str[i];
		}
		//��C���Եķ�ʽ��ӡstr
		const char* c_str()
		{
			return _str;
		}
	private:
		char* _str;
	};
}

int main()
{
	//���Թ��캯����[]����������
	jzh::string s;                 //�����ι��캯��
	cout << s.c_str() << endl;

	jzh::string s0("hello world");//���ι��캯��
	cout << s0.c_str() << endl;
	s0[0] = 'H';                  //[]����������
	cout << s0.c_str() << endl;

	//���Կ������캯��
	jzh::string s1(s0);          //�������캯��
	cout << s1.c_str() << endl;

	//���Ը�ֵ���������
	jzh::string s2 = "�й����";
	s1 = s2;
	cout << s1.c_str() << endl;

	system("pause");
	return 0;
}