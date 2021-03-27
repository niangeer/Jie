#include "String.h"

//测试构造函数、拷贝构造函数、赋值
void TestString()
{
	cout << "TestString #" << endl;
	jzh::string s0("hello world");
	cout << s0.c_str() << endl;

	jzh::string s1(s0);
	cout << s1.c_str() << endl;

	jzh::string s2(nullptr);
	cout << s2.c_str() << endl;

	jzh::string s3;
	cout << s3.c_str() << endl;

	jzh::string s4 = s1;
	cout << s4.c_str() << endl;

	cout << endl;
}

void TestSize()
{
	cout << "TestSize #" << endl;
	jzh::string s0("hello world");
	jzh::string s1(s0);
	jzh::string s2(nullptr);
	jzh::string s3;

	cout << "size:" << s0.size() << endl;
	cout << "size:" << s1.size() << endl;
	cout << "size:" << s2.size() << endl;
	cout << "size:" << s3.size() << endl;

	cout << endl;
}

void TestCapacity()
{
	cout << "TestCapacity #" << endl;
	jzh::string s0("hello world");
	jzh::string s1(s0);
	jzh::string s2(nullptr);
	jzh::string s3;

	cout << "capacity:" << s0.capacity() << endl;
	cout << "capacity:" << s1.capacity() << endl;
	cout << "capacity:" << s2.capacity() << endl;
	cout << "capacity:" << s3.capacity() << endl;

	cout << endl;
}

void TestIterator()
{
	cout << "TestIterator #" << endl;
	jzh::string s0("hello world");

	jzh::string::iterator it = s0.begin();
	while (it != s0.end())
	{
		cout << *it;
		it++;
	}
	cout << endl << endl;
}

//测试修改
void TestModify()
{
	cout << "TestModify" << endl;
	jzh::string s("hello ");
	s.append("world");
	cout << s.c_str() << endl;

	s.push_back('!');
	cout << s.c_str() << endl;

	s.append("hello");
	cout << s.c_str() << endl;
	cout << s.size() << "\n" << s.capacity() << endl;
	cout << endl;
}

int main()
{
	TestString();
	TestSize();
	TestCapacity();
	TestIterator();
	TestModify();

	system("pause");
	return 0;
}