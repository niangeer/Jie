#include <iostream>
using namespace std;

template <class T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T>
T Add(const T& a, const T& b)  //ע�ⷵ��ֵ������
{
	return a + b;
}

//int main()    //����ģ��
//{
//	int a = 2;
//	int b = 4;
//	Swap(a, b);
//	cout << "a=" << a << " " << "b=" << b << endl;
//
//	cout << Add(a, b) << endl;
//	cout << "a=" << a << " " << "b=" << b << endl;
//	
//	double d1 = 2.22;
//	cout << Add(a, (int)d1) << endl;  //���Ͳ�ͬʱ������һ�Լ�ǿת
//	cout << Add<int>(a, d1) << endl;  //            ������ʹ����ʾʵ����
//
//	system("pause");
//	return 0;
//}


template <class T>
class Stack         //��ͨ�࣬Stack��������  ��ģ�壬Stack<T>��������
{
public:
	Stack(int capacity = 10)
		:_a(new T[capacity])
		,_capacity(capacity)
		, _size(0)
	{}

	~Stack();

private:
	T* _a;
	int _size;
	int _capacity;
};

template <class T> //��ģ���к�������������ж���ʱ����Ҫ��ģ������б�
Stack<T>::~Stack() //ע������
{
	if (Stack::_a)
	{
		delete[] _a;
	}
	_a = nullptr;
	_size = 0;
	_capacity = 0;

	cout << "Stack<T>::~Stack()" << endl;
}

int main()
{
	Stack<int> st1;  //Stack<int> ��������
	system("pause");
	return 0;
}

