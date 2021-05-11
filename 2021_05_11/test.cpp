#include "queue.hpp"

namespace jzh
{
	void TestConstructor()
	{
		queue<int> first;         //无参构造函数,底层默认使用deque
		queue<int> second;        //用mydeck初始化queue
		second.push(100);
		second.push(100);
		second.push(100);

		queue<int, std::list<int> > third;  //底层用list
		queue<int, std::list<int> > fourth; //用mylist初始化queue
		fourth.push(200);
		fourth.push(200);

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
}

int main()
{
	jzh::TestConstructor();
	jzh::TestFunc();
	system("pause");
	return 0;
}