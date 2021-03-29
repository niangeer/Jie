#include "string.h"

void Test1()
{
	jzh::string s0("hello world");
	cout << s0.c_str() << endl;
	jzh::string s1(s0);
	cout << s1.c_str() << endl;
	jzh::string s2;
	cout << s2.c_str() << endl;
	jzh::string s3(nullptr);
	cout << s3.c_str() << endl;
	s3 = s1;
	cout << s3.c_str() << endl;

	s0.swap(s2);
	cout << s0.c_str() << endl;
	cout << s2.c_str() << endl;
}

//Test Iterator
void Test2()
{
	jzh::string s0("hello world \0 hello");
	jzh::string::iterator it = s0.begin();
	while (it != s0.end())
	{
		cout << *it;
		it++;
	}
	cout << endl;

	const jzh::string s1("hello world");
	jzh::string::const_iterator cit = s1.begin();
	while (cit != s1.end())
	{
		cout << *cit;
		cit++;
	}
	cout << endl;

}

//Test Capacity
void Test3()
{
	jzh::string s0("hello world");
	cout << s0.c_str() << endl;
	cout << "size=" << s0.size() << endl;
	cout << "capacity=" << s0.capacity() << endl;
	cout << "IsEmpty  " << s0.empty() << endl << endl;

	//s0.clear();
	//cout << s0.size() << endl;
	//cout << s0.capacity() << endl;
	//cout << s0.empty() << endl;

	s0.resize(2);
	cout << s0.c_str() << endl;
	cout << "size=" << s0.size() << endl;
	cout << "capacity=" << s0.capacity() << endl;
	cout << "IsEmpty  " << s0.empty() << endl << endl;

	s0.resize(5, 'a');
	cout << s0.c_str() << endl;
	cout << "size=" << s0.size() << endl;
	cout << "capacity=" << s0.capacity() << endl;
	cout << "IsEmpty  " << s0.empty() << endl << endl;

	s0.resize(12, 'w');
	auto it = s0.begin();
	while (it != s0.end())
	{
		cout << *it;
		it++;
	}
	cout << endl;
	cout << "size=" << s0.size() << endl;
	cout << "capacity=" << s0.capacity() << endl;
	cout << "IsEmpty  " << s0.empty() << endl << endl;
}

//Test Access
void Test4()
{
	jzh::string s0("hello world");
	for (size_t i = 0; i < s0.size(); i++)
	{
		cout << s0[i];
	}
	cout << endl;

	s0[0] = 'H';
	cout << s0.c_str() << endl;
}

//Test Modifiers
void Test5()
{
	jzh::string s0("hello world");
	s0.push_back('!');
	cout << s0.c_str() << endl;

	s0.append("hello China");
	cout << s0.c_str() << endl;
	cout << endl;

	jzh::string s1("hello world");
	jzh::string s2("!Hello China!");
	s1 += '!';
	cout << s1.c_str() << endl;

	s1 += "hello China";
	cout << s1.c_str() << endl;

	s1 += s2;
	cout << s1.c_str() << endl;

	s1.insert(5, '!');
	cout << s1.c_str() << endl;
	s1.insert(5, "hello");
	cout << s1.c_str() << endl;

	s1.erase(5, 6);
	cout << s1.c_str() << endl;
	s1.erase(5);
	cout << s1.c_str() << endl;
}

//Test String operations
void Test6()
{
	jzh::string s0("hello world");
	cout << s0.find('d') << endl;
	cout << s0.find("lo") << endl;

	cout << s0.c_str() << endl;
}

//Test Non-member function overloads
void Test7()
{
	jzh::string s0("hello world");
	cout << "ÇëÊäÈëÄÚÈÝ# ";
	cin >> s0;
	cout << s0 << endl;
}

void Test8()
{
	string s1("hello");
	string s2("world");
	string s3;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	s3 = s1 + ' ' + s2 + '!' + "hello";
	cout << s3 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	Test7();
	//Test8();

	system("pause");
	return 0;
}