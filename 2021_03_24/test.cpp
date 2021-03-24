#include <iostream>
#include <string>

#pragma warning(disable:4996)

using namespace std;

namespace jzh
{
	class string
	{
	public:
		//构造函数（需要使用深拷贝）
		string(const char* s = "") 
			:_str(new char[strlen(s) + 1])
		{
			strcpy(_str, s);
		}
		//拷贝构造函数
		string(const string& s)
		{
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		//析构函数
		~string()
		{
			delete[] _str;
			_str = nullptr;
		}
		//赋值运算符重载
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

		// []操作符重载
		char& operator[](size_t i)
		{
			return _str[i];
		}
		//以C语言的方式打印str
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
	//测试构造函数与[]操作符重载
	jzh::string s;                 //不带参构造函数
	cout << s.c_str() << endl;

	jzh::string s0("hello world");//带参构造函数
	cout << s0.c_str() << endl;
	s0[0] = 'H';                  //[]操作符重载
	cout << s0.c_str() << endl;

	//测试拷贝构造函数
	jzh::string s1(s0);          //拷贝构造函数
	cout << s1.c_str() << endl;

	//测试赋值运算符重载
	jzh::string s2 = "中国你好";
	s1 = s2;
	cout << s1.c_str() << endl;

	system("pause");
	return 0;
}