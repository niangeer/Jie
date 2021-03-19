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
T Add(const T& a, const T& b)  //注意返回值的类型
{
	return a + b;
}

//int main()    //函数模板
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
//	cout << Add(a, (int)d1) << endl;  //类型不同时，方法一自己强转
//	cout << Add<int>(a, d1) << endl;  //            方法二使用显示实例化
//
//	system("pause");
//	return 0;
//}


template <class T>
class Stack         //普通类，Stack就是类型  类模板，Stack<T>才是类型
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

template <class T> //类模板中函数放在类外进行定义时，需要加模板参数列表
Stack<T>::~Stack() //注意类型
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
	Stack<int> st1;  //Stack<int> 才是类型
	system("pause");
	return 0;
}

