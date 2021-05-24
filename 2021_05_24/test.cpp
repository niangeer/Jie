#include <iostream>
using namespace std;

////一，final
//class Car final //表示类无法被继承
//{
//public:
//	virtual void Drive() //表示该虚函数无法被重写
//	{
//		cout << "hello " << endl;
//	}
//};
//class Benz :public Car
//{
//public:
//	//virtual void Drive() { cout << "Benz-舒适" << endl; }
//};
//int main()
//{
//	Car c;
//	Benz b;
//	system("pause");
//	return 0;
//}

////二，override
////override: 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错
//class Car{
//public:
//	virtual void Drive(){}
//};
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-舒适" << endl; }
//};
//
//void Func(Car& c)
//{
//	c.Drive();
//}
//int main()
//{
//	Car c;
//	Benz b;
//	Func(c);
//	Func(b);
//	system("pause");
//	return 0;
//}

////三，抽象类（包含纯虚函数的类）
//class Person
//{
//public:
//	virtual void func() = 0; //纯虚函数
//};
//class Student : public Person
//{
//public:
//	virtual void func()  //若不进行重写，则Student也为抽象类。只有重写纯虚函数，派生类才能实例化出对象。
//	{
//		cout << "hello world" << endl;
//	}
//};
//class Teacher : public Person
//{
//public:
//	virtual void func()
//	{
//		cout << "hello byte" << endl;
//	}
//};
//
//void Func(Person& p)
//{
//	p.func();
//}
//int main()
//{
//	////Person p;   //抽象类不能实例化出对象
//	//Student s;
//	//Teacher t;
//	//Func(s);
//	//Func(t);
//
//	Person* ps = new Student;
//	Person* pt = new Teacher;
//	ps->func();
//	pt->func();
//	system("pause");
//	return 0;
//}


////四，多态的原理
////虚函数表，打开调试窗口用内存查看
//class A
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//	virtual void kFunc2()
//	{
//		cout << "Func2()" << endl;
//	}
//	void Func3()
//	{
//		cout << "Func3()" << endl;
//	}
//protected:
//	int _a = 1;
//};
//
//class B : public A
//{
//public:
//	virtual void Func1()
//	{
//		cout << "B::Func1()" << endl;
//	}
//protected:
//	int _b = 2;
//};
//
//int main()
//{
//	A a;
//	B b;
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	system("pause");
//	return 0;
//}


//多态原理
class Person
{
public:
	virtual void BuyTicket() { cout << "买票-全价" << endl; }
	int _a = 1;
};
class Student : public Person
{
public:
	virtual void BuyTicket() { cout << "买票-半价" << endl; }
	int _b = 2;
};

void Test(Person& rp) //若不使用引用与指针，因为rp的虚表在编译时就确定，Person类型就用Person类型的虚表
{
	rp.BuyTicket();
}
int main()

{
	Person p;
	Student s;
	s._a = 3;
	Test(p);
	Test(s);
	system("pause");
	return 0;
}