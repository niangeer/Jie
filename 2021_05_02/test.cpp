#include "list.hpp"

template<class T>
void PrintList(const jzh::list<T>& l)
{
	jzh::list<int>::const_iterator it = l.begin();
	//auto it = l.begin();

	while (it != l.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}

void TestConstructor()
{
	jzh::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	PrintList(l);
}

int  main()
{
	TestConstructor();
	system("pause");
	return 0;
}