#include <iostream>
#include <vector>
#include <queue>     //priority_queue容器默认使用vector,底层实际是个heap
#include <algorithm> //堆在stl中不做容器，算是类属算法，分属在algorithm
#include <functional> //greater、less仿函数
using namespace std;

void TestConstructor()
{
	priority_queue<int> pq1;                       //无参构造
	cout << "pq1_size: " << pq1.size() << "  ";
	cout << "pq1_empty: " << pq1.empty() << endl;
	pq1.push(1);
	pq1.push(1);
	pq1.push(1);

	priority_queue<int> pq2(pq1);                  //拷贝构造
	cout << "pq2_size: " << pq2.size() << "  ";
	cout << "pq2_empty: " << pq2.empty() << endl;

	int arr[] = { 2, 3, 1, 5, 9, 7 };              
	priority_queue<int> pq3(arr, arr + 6);         //迭代器构造
	cout << "pq3_size: " << pq3.size() << "  ";
	cout << "pq3_empty: " << pq3.empty() << endl;
}

void TestFunc()
{
	priority_queue<int, vector<int>, greater<int>> pq;  //greater排升序，less排降序
	pq.push(1);    //push
	pq.push(9);
	pq.push(2);
	pq.push(3);
	pq.push(4);
	pq.push(7);
	pq.push(9); 
	cout << "pq_size: " << pq.size() << "  ";      //size
	cout << "pq_empty: " << pq.empty() << endl;    //empty

	while (!pq.empty())
	{
		cout << pq.top() << " "; //top
		pq.pop();                //pop
	}
	cout << endl;
}
int main()
{
	TestConstructor();
	TestFunc();
	system("pause");
	return 0;
}