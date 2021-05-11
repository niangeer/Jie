#include "queue.hpp"

namespace jzh
{
	void TestConstructor()
	{
		queue<int> first;         //�޲ι��캯��,�ײ�Ĭ��ʹ��deque
		queue<int> second;        //��mydeck��ʼ��queue
		second.push(100);
		second.push(100);
		second.push(100);

		queue<int, std::list<int> > third;  //�ײ���list
		queue<int, std::list<int> > fourth; //��mylist��ʼ��queue
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
		cout << "front: " << q1.front() << endl;   //front����ȡ��ͷ����
		cout << "back: " << q1.back() << endl;     //back����ȡ��β����
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