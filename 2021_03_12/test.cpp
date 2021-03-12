#include <iostream>

using namespace std;

//  //引用的特性
//int main()
//{
//	int a = 5;
//	int b = 10;
//
//	//int& c;   // (1) 引用在定义时必须初始化
//	//c = a;
//
//	int& c = a;  //c引用a
//	c = b;       //c赋值b   //(2)引用一旦引用一个实体，再不能引用其他实体
//
//	int& d = a;  // (3) 一个变量可以有多个引用
//	int& e = a;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//	cout << e << endl;
//	system("pause");
//	return 0;
//}


////常引用
////指针和引用在初始化赋值时，权限可以缩小，不可以放大
//int main()
//{
//	const int a = 9;
//
//	//int& ra = a;       //引用常变量，编译时会出错
//	const int& ra = a;
//
//	//int& b = 10;      //引用常量时，编译会出错，需用const int& rb
//	const int& b = 10;
//
//	double c = 2.22;   
//	int d = c;          //类型不同隐式转换时，不是直接赋值，c会将值拷贝给临时空间，临时空间再拷贝回d
//	//int& rc = c;      //编译时会出错，类型不同
//	const int& rc = d;  //临时变量具有常性
//
//	cout << a << endl;
//	cout << ra << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << rc << endl;
//	cout << d << endl;
//
//	system("pause");
//	return 0;
//}


//使用场景
//1，做参数
//<1>当做输出型参数时，不用传指针也能改变原值
//<2>大对象使用引用传参可以提高效率
void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

//2,引用做返回值
//需注意若函数返回时，出了函数作用域，返回对象还给了系统，不能用引用返回

//int Count()
//{
//	static int n = 0;
//		n++;
//	// ...
//	return n;     //这里是把n拷贝给临时变量，临时变量再拷贝给ret；(发生两次拷贝)
//}

int& Count()
{
	static int n = 0;
	    n++;
	// ...
	return n;     //这里临时变量是n的引用，未发生拷贝，然后临时变量再拷贝给ret，
}                 //相当于直接把n拷贝给ret；  （发生一次拷贝）

int main()
{
	int a = 5;
	int b = 10;

	Swap(a, b);         
	cout << a << endl;
	cout << b << endl;

	int ret = Count();
	cout << ret << endl;

	system("pause");
	return 0;
}