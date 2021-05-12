#include <iostream>
#include <vector>
#include <queue>     //priority_queue����Ĭ��ʹ��vector,�ײ�ʵ���Ǹ�heap
#include <algorithm> //����stl�в������������������㷨��������algorithm
#include <functional> //greater��less�º���
using namespace std;

void TestConstructor()
{
	priority_queue<int> pq1;                       //�޲ι���
	cout << "pq1_size: " << pq1.size() << "  ";
	cout << "pq1_empty: " << pq1.empty() << endl;
	pq1.push(1);
	pq1.push(1);
	pq1.push(1);

	priority_queue<int> pq2(pq1);                  //��������
	cout << "pq2_size: " << pq2.size() << "  ";
	cout << "pq2_empty: " << pq2.empty() << endl;

	int arr[] = { 2, 3, 1, 5, 9, 7 };              
	priority_queue<int> pq3(arr, arr + 6);         //����������
	cout << "pq3_size: " << pq3.size() << "  ";
	cout << "pq3_empty: " << pq3.empty() << endl;
}

void TestFunc()
{
	priority_queue<int, vector<int>, greater<int>> pq;  //greater������less�Ž���
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