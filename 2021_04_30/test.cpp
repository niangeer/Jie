#include "vector.hpp"

//测试构造函数
void TestConstructor()
{
	jzh::vector<int> v0;
	cout << v0.size() << " ";
	cout << v0.capacity() << " ";
	cout << v0.empty() << endl;

	jzh::vector<int> v1(4, 2);
	cout << v1.size() << " ";
	cout << v1.capacity() << " ";
	cout << v1.empty() << endl;

	jzh::vector<int> v2(v1.begin(),v1.end());
	cout << v2.size() << " ";
	cout << v2.capacity() << " ";
	cout << v2.empty() << endl;

	jzh::vector<int> v3(v1);
	cout << v3.size() << " ";
	cout << v3.capacity() << " ";
	cout << v3.empty() << endl;

	v0 = v1;
	cout << v0.size() << " ";
	cout << v0.capacity() << " ";
	cout << v0.empty() << endl;
}

//测试迭代器
void TestIterator()
{
	jzh::vector<int> v(7, 7);
	jzh::vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

//测试容量
void TestCapacity()
{
	jzh::vector<int> v;
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.reserve(5);
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.resize(10, 1);
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;

}

//测试元素修改
void TestElementAccess()
{
	jzh::vector<int> v(9);
	for (size_t i = 0; i < v.size(); i++)
	{
		v[i] = i;
	}

	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

//测试增删
void TestModifiers()
{
	//pop_back、push_back
	jzh::vector<int> v;
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for (int i = 0; i < 10; i++)
	{
		v.pop_back();
	}

	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	//insert、erase
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.insert(v.begin(), 2);
	v.insert(v.end(), 2);
	v.insert(v.begin() + 2, 2);
	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.erase(v.begin() + 2);
	v.erase(v.begin());
	v.erase(v.end() - 1);
	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

//测试迭代器失效
void TestIteratorError()
{
	jzh::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	jzh::vector<int>::iterator it = v.begin();
	//v.insert(it, 21); //insert之后增容会导致原空间被释放，it变为野指针
	//it = v.begin()    //在使用前，对迭代器重新赋值可以解决
	it = v.insert(it, 21); //it接收insert返回值可以解决迭代器失效的问题

	auto eit = v.begin();
	//while (eit != v.end()) //eit失效的原因，删除end()-1 位置的值时，end()前移，eit++后与eit错开，
	//{                      //导致进行了越界访问
	//	if (0 == *eit % 2)
	//	{
	//		v.erase(eit);
	//	}
	//	eit++;
	//}

	while (eit != v.end()) 
	{                     
		if (0 == *eit % 2)
			eit=v.erase(eit);
		else
			eit++;
	}
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	//TestConstructor();
	//TestIterator();
	//TestCapacity();
	//TestElementAccess();
	TestModifiers();
	//TestIteratorError();

	system("pause");
	return 0;
}