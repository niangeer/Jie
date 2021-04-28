#include <iostream>
#include <vector>
using namespace std;

//vector构造函数
void TestConstructor()
{
	vector<int> v1;                //无参          
	cout << v1.size() << " ";
	cout << v1.capacity() << " ";
	cout << v1.empty() << endl;

	vector<int> v2(10, 3);       //开辟10个空间，以数据0填充开辟空间
	cout << v2.size() << " ";
	cout << v2.capacity() << " ";
	cout << v2.empty() << endl;

	vector<int> v3(10);          //开辟10个空间，数据默认为0
	cout << v3.size() << " ";
	cout << v3.capacity() << " ";
	cout << v3.empty() << endl;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	vector<int> v4(arr, arr + sizeof(arr) / sizeof(arr[0]));  //用迭代器（指针）进行初始化
	cout << v4.size() << " ";
	cout << v4.capacity() << " ";
	cout << v4.empty() << endl;

	//vector 的拷贝构造
	vector<int> v5(v2);
	cout << v5.size() << " ";
	cout << v5.capacity() << " ";
	cout << v5.empty() << endl;
}

void TestIterator()
{
	vector<int> v1(10);

	for (size_t i = 0; i < v1.size(); i++)  //用[]进行遍历
	{
		v1[i] = i;
	}

	vector<int>::iterator it = v1.begin();
	while (it != v1.end())       //使用迭代器遍历
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (auto e : v1)            //使用范围for进行打印，对于自定义对象若不更改数据，最好使用
	{                            //for(const auto& e : v1) ; 因为是将v1赋值给e，会发生拷贝
		cout << e << " ";
	}
	cout << endl;
}

void TestCapacity()
{
	vector<int> v;
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.reserve(10);
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.resize(20);     //默认以0填充
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.reserve(10);     //容量不会缩小
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;
}

void TestElement()
{
	vector<int> v(10);

	for (size_t i = 0; i < v.size(); i++)
	{
		v[i] = i;
	}
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.front() << endl;  //第一个数据
	cout << v.back() << endl;   //最后一个数据
}

void TestModifiers()
{
	vector<int> v(10);
	vector<int>::iterator it = v.begin();
	int count = 0;
	while (it != v.end())
	{
		v[count] = count;
		count++;
		it++;
	}

	v.pop_back();     //尾删
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	v.push_back(9);    //尾插
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	auto ret = find(v.begin(), v.end(), 9);   //find
	if (ret == v.end())
	{
		cout << "未找到数据" << endl;
	}
	else
	{
		cout << *ret << endl;
	}

	v.insert(v.end(), 5, 1);   //insert
	it = v.begin();
	while (it != v.end())     
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	it = v.begin(); 
	ret = find(v.begin(), v.end(), 9);
	v.erase(ret);            //erase
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	vector<int> v1;     
	v1.swap(v);           //swap，交换v与v1的数据空间

	v1.clear();           //清空数据，但容量还在

}
int main()
{
	//TestConstructor();
	//TestIterator();
	//TestCapacity();
	//TestElement();
	TestModifiers();

	system("pause");
	return 0;
}