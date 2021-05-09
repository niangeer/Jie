#include <iostream>
#include <queue>  //�����ȳ�
#include <deque>
#include <list>
using namespace std;

void TestConstructor()
{
	deque<int> mydeck(3, 100);
	list<int> mylist(2, 200);       

	queue<int> first;                 //�޲ι��캯��,�ײ�Ĭ��ʹ��deque
	queue<int> second(mydeck);        //��mydeck��ʼ��queue

	queue<int, std::list<int> > third; //�ײ���list
	queue<int, std::list<int> > fourth(mylist);//��mylist��ʼ��queue

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

int main()
{
	TestConstructor();
	TestFunc();
	system("pause");
	return 0;
}