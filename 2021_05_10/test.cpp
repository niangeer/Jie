#include <iostream>
#include <queue>  //先入先出
#include <deque>
#include <list>
using namespace std;

void TestConstructor()
{
	deque<int> mydeck(3, 100);
	list<int> mylist(2, 200);       

	queue<int> first;                 //无参构造函数,底层默认使用deque
	queue<int> second(mydeck);        //用mydeck初始化queue

	queue<int, std::list<int> > third; //底层用list
	queue<int, std::list<int> > fourth(mylist);//用mylist初始化queue

	cout << "size of first: " << first.size() << '\n';
	cout << "size of second: " << second.size() << '\n';
	cout << "size of third: " << third.size() << '\n';
	cout << "size of fourth: " << fourth.size() << '\n';
}

void TestFunc()
{
	queue<int> q1;
	cout << "empty: " << q1.empty() << endl;   //size
	cout << "size: " << q1.size() << endl;     //empty
	q1.push(4);                                //push
	q1.push(9);
	cout << "front: " << q1.front() << endl;   //front：获取队头数据
	cout << "back: " << q1.back() << endl;     //back：获取队尾数据
	q1.pop();                                  //pop
	cout << "front: " << q1.front() << endl;
	cout << "back: " << q1.back() << endl;
}

int main()
{
	TestConstructor();
	TestFunc();
	system("pause");
	return 0;
}