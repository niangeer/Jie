#include "vector.hpp"

//≤‚ ‘ππ‘Ï∫Ø ˝
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

//≤‚ ‘µ¸¥˙∆˜
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

//≤‚ ‘»›¡ø
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

//≤‚ ‘‘™Àÿ–ﬁ∏ƒ
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

//≤‚ ‘‘ˆ…æ
void TestModifiers()
{
	//pop_back°¢push_back
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

	//insert°¢erase
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

int main()
{
	//TestConstructor();
	//TestIterator();
	//TestCapacity();
	//TestElementAccess();
	TestModifiers();

	system("pause");
	return 0;
}