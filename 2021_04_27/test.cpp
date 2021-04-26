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

void Test()
{
	vector<int> v1(10);

	for (size_t i = 0; i < v1.size(); i++)  //用[]进行遍历
	{
		cin >> v1[i];
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

int main()
{
	TestConstructor();
	//Test();

	system("pause");
	return 0;
}