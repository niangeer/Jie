#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	virtual void BuyTicket()
	{
		cout << "正常买票_全价" << endl;
	}
};

class Student : public Person
{
public:
	/*注意：在重写基类虚函数时，派生类的虚函数在不加virtual关键字时，虽然也可以构成重写(因为继
	承后基类的虚函数被继承下来了在派生类依旧保持虚函数属性),但是该种写法不是很规范，不建议这样使用*/
	virtual void BuyTicket()
	{
		cout << "学生买票_半价" << endl;
	}
};

//满足多态：指向谁就调用谁的虚函数
//1. 必须通过基类的指针或者引用调用虚函数
//2. 被调用的函数必须是虚函数，且派生类必须对基类的虚函数进行重写
//虚函数重写的条件
//a，父子类中的函数都是虚函数
//b，函数名、参数、返回值都要相同
//不满足多态：跟类型有关，p是什么类型，就调这个类型的成员函数

//注意：
//函数重写的两个例外： (1)协变 (2)析构函数的重写
void Func( Person& p)
{
	p.BuyTicket();
}
int main()
{
	Person p;
	Student s;
	Func(p);
	Func(s);
	system("pause");
	return 0;
}



////协变
////派生类重写基类虚函数时，与基类虚函数返回值类型不同。即基类虚函数返回基类对象的指针或者引用，
////派生类虚函数返回派生类对象的指针或者引用时，称为协变。
//class A
//{};
//class B :public A
//{};
//
//class Person
//{
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "正常买票_全价" << endl;
//		return nullptr;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual B* BuyTicket()
//	{
//		cout << "学生买票_半价" << endl;
//		return nullptr;
//	}
//};
//
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//int main()
//{
//	Person p;
//	Student s;
//	Func(p);
//	Func(s);
//	system("pause");
//	return 0;
//}


////析构函数
////编译器对析构函数的名称做了特殊处理，编译后析构函数的名称统一处理成destructor
//class Person 
//{
//public:
//	virtual ~Person() { cout << "~Person()" << endl; }
//};
//class Student : public Person 
//{
//public:
//	virtual ~Student() { cout << "~Student()" << endl; }
//};
////只有派生类Student的析构函数重写了Person的析构函数，下面的delete对象调用析构函数，
////才能构成多态，才能保证p1和p2指向的对象正确的调用析构函数。
//
//int main()
//{
//	Person* p1 = new Person;
//	Person* p2 = new Student;  //发生切片（切割）行为
//	delete p1;
//	delete p2;                 //若不调用Student的析构可能会内存泄漏
//	system("pause");
//	return 0;
//}