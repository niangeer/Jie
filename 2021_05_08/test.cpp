#include <iostream>
#include <stack>    //后入先出
#include <vector>
#include <deque>
using namespace std;

void TestConstructor()
{
	deque<int> mydeque(3, 100);         
	vector<int> myvector(2, 200);       

	stack<int> first;                   //默认使用deque
	stack<int> second(mydeque);         //用mydeque初始化stack

	stack<int, std::vector<int> > third;  //底层用vector
	stack<int, std::vector<int> > fourth(myvector); //用myvector初始化stack

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
	cout << "top: " << st.top() << endl;  //top : 获取栈顶的数据

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