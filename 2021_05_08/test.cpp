#include <iostream>
#include <stack>    //�����ȳ�
#include <vector>
#include <deque>
using namespace std;

void TestConstructor()
{
	deque<int> mydeque(3, 100);         
	vector<int> myvector(2, 200);       

	stack<int> first;                   //Ĭ��ʹ��deque
	stack<int> second(mydeque);         //��mydeque��ʼ��stack

	stack<int, std::vector<int> > third;  //�ײ���vector
	stack<int, std::vector<int> > fourth(myvector); //��myvector��ʼ��stack

	cout << "size of first: " << first.size() << endl;  //0
	cout << "size of second: " << second.size() << endl;  //3
	cout << "size of third: " << third.size() << endl;  //0
	cout << "size of fourth: " << fourth.size() << endl; //2
}

void TestFunc()
{
	stack<int> st;
	cout << "empty: " << st.empty() << endl;  //empty
	cout << "size: " << st.size() << endl;  //size
	
	st.push(9);                 //push
	st.push(4);
	cout << "top: " << st.top() << endl;  //top : ��ȡջ��������

	st.pop();                  //pop
	cout << "top " << st.top() << endl;
}

int main()
{
	TestConstructor();
	TestFunc();
	system("pause");
	return 0;
}