#include "stack.hpp"

namespace jzh
{
	void TestConstructor()
	{
		jzh::stack<int> first;               //������Ĭ��ʹ��deque
		jzh::stack<int> second(first);       //��������
		second.push(100);
		second.push(100);
		second.push(100);

		jzh::stack<int, vector<int> > third;  //�ײ���vector
		jzh::stack<int, vector<int> > fourth; 
		fourth.push(200);
		fourth.push(200);

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
}

int main()
{
	jzh::TestConstructor();
	jzh::TestFunc();
	system("pause");
	return 0;
}