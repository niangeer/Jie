#include <iostream>
#include <list>
using namespace std;

void TestConstructor()
{
	list<int> lt1;
	list<int> lt2(4, 99);
	list<int> lt3(lt2.begin(), lt2.end());
	list<int> lt4(lt2);
	cout << lt1.size() << " ";
	cout << lt1.empty() << endl;
	cout << lt2.size() << " ";
	cout << lt2.empty() << endl;
	cout << lt3.size() << " ";
	cout << lt3.empty() << endl;
	cout << lt4.size() << " ";
	cout << lt4.empty() << endl;

	lt1 = lt2;
	cout << lt1.size() << " ";
	cout << lt1.empty() << endl;
}

void TestIterator()
{
	list<int> lt;
	for (int i = 0; i < 10; i++)
	{
		lt.push_back(i);
	}

	list<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (const auto& e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

void TestCapacity()
{
	list<int> lt;
	cout << "size : " << lt.size() << endl;
	cout << "empty: " << lt.empty() << endl;
}

void TestAccess()
{
	//����T&
	list<int> lt(2, 3);
	int front = lt.front();
	cout << front << endl;
	int back = lt.back();
	cout << back << endl;
}

void TestModifiers()
{
	list<int> lt;
	lt.push_back(1);  //β��
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);
	lt.insert(lt.begin(), 0); //posλ�ò�
	lt.push_front(7);//ͷ��

	for (const auto& e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	lt.remove(3); //ɾ������Ϊ3�Ľڵ�
	lt.pop_front();//ͷɾ
	lt.pop_back(); //βɾ
	lt.erase(lt.begin());//posλ��ɾ
	lt.erase(lt.begin(), lt.end());//posλ��ɾ��lt.end()��
	for (const auto& e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	//TestConstructor();
	//TestIterator();
	//TestCapacity();
	//TestAccess();
	TestModifiers();
	system("pause");
	return 0;
}
