#include <iostream>
#include <string>
using namespace std;

////不管以何种方式继承，基类的private成员在派生类中不可见、
////基类
//class Person  
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//	}
//protected:
//	char* _name = "小明";  //给缺省值
//	int _age = 18;
//};
//
////派生类     继承方式
//class Student:public Person  
//{
//public:
//	void func(int i)
//	{
//		//cout << _age << endl;
//	}
//protected:
//	int _stuid;
//};
//
//int main()
//{
//	Person p;
//	Student s;
//	int a = sizeof(Person);
//	int b = sizeof(Student);  //基类大小等于父类大小加上自己的成员变量
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}


////基类和派生类对象赋值转换
//class Person
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//	}
//
//	string _name = "小明";
//	int _age = 17;
//};
//
//class Student : public Person
//{
//public:
//	void func(int i)
//	{
//		cout << _stuid << endl;
//	}
//
//	int _stuid;
//};
//int main()
//{
//	Person p;
//	Student s;
//	s._name = "小花";
//	s._age = 12;
//	p = s;             //派生类可以赋值给基类，叫做切割或切片，这个过程不发生隐式类型转换
//	//s = p;             //基类不可以赋值给派生类
//
//	Person* ptr1 = &p;  //基类与派生类指针与引用可以互相赋值
//	Person& ref1 = p;
//	Person* ptr2 = &s;
//	Person& ref2 = s;
//
//	//父类指针或者引用是可以转回子类类型指针或者引用
//	Student* ptr3 = (Student*)ptr2;
//	Student& ref3 = (Student&)ref2;
//	ptr3->_name = "康康";
//	ptr3->_stuid = 1;
//
//	//若将基类强转为派生类，存在越界风险
//	Student* ptr4 = (Student*)ptr1;
//	Student& ref4 = (Student&)ref1;
//	ptr4->_name = "小小";
//	ptr4->_stuid = 2;  //越界
//
//	system("pause");
//	return 0;
//}


////在继承体系中基类和派生类都有独立的作用域
////成员函数的隐藏，只需要函数名相同就构成隐藏。
//class Person
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//	}
//protected:
//	string _name = "小明";
//	int _age = 18;
//};
//
//class Student : public Person
//{
//public:
//	void func()
//	{
//		cout << " 姓名:" << _name << endl;
//		cout << " 年龄:" << Person::_age << endl;
//		cout << " 年龄:" << _age << endl;
//	}
//protected:
//	int _age = 1;
//};
//
//int main()
//{
//	Student s;
//	s.func();    //调用的是派生类的func,重定义,同一作用域才是重载
//	s.Person::func(); //调用基类func,需要显示作用域
//
//	system("pause");
//	return 0;
//}


////派生类的六个默认生成函数
//class Person
//{
//public:
//	Person(const string& str = "小明", int age = 18)
//		:_name(str)
//		, _age(age)
//	{
//		cout << "Person()" << endl;
//	}
//	Person(const Person& p)
//		:_name(p._name)
//		, _age(p._age)
//	{
//		cout << "copy Person()" << endl;
//	}
//	Person& operator=(const Person& p)
//	{
//		cout << "operator=()" << endl;
//		if (&p != this)
//		{
//			_name = p._name;
//			_age = p._age;
//		}
//		return *this;
//	}
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name;
//	int _age;
//};
//
//class Student : public Person
//{
//public:
//	//继承下来的父类部分的成员，要使用父类的构造函数去初始化，不能自己显示的去初始化
//	Student(const string& str = "小明", int age = 18, int id = 111)
//	:Person(str, age)
//	//, _name(str)    //不能自己显示的去初始化
//	//, _age(age)
//	, _stuid(id)
//	{
//		cout << "Student()" << endl;
//	}
//
//	//拷贝构造，赋值重载，析构可用系统自动生成的
//	Student(const Student& s)
//		:Person(s)    //子类可以赋值给父类
//		, _stuid(s._stuid)
//	{
//		cout << "copy Student()" << endl;
//	}
//
//	Student& operator=(const Student& s)
//	{
//		cout << "Student operator=()" << endl;
//		if (this != &s)
//		{
//			Person::operator=(s);    //注意这里的赋值方式
//			_stuid = s._stuid;
//		}
//		return *this;
//	}
//
//	//关于析构函数的两个注意点
//	//1，子类的析构函数和父类的析构函数构成隐藏，所有类的析构函数，名字会被同一处理成destructor
//	//2，自己显示调用，存在父类先析构的问题，不符合规则
//	~Student()
//	{
//		//Person::Person();  让系统自动去调用，自己显示调用会存在父类先析构的问题
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _stuid;
//};
//
//void test()
//{
//	Student s1("小花", 12, 12247);
//	Student s2(s1);
//	Student s3;
//	s3 = s1;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

////继承与友元
////基类的友元关系不继承给派生类
//class Student;
//class Person
//{
//	friend void func(const Person& p, const Student& s);
//protected:
//	string _name = "小明";
//};
//
//class Student : public Person
//{
//protected:
//	int _age = 12;
//};
//
//void func(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	//cout << s._age << endl; //基类友元不可访问派生类私有与保护
//}
//int main()
//{
//	Person p;
//	Student s;
//	func(p, s);
//	system("pause");
//	return 0;
//}

////继承与静态成员
////基类定义了static静态成员，则整个继承体系里面只有一个这样的成员
////无论派生出多少个子类，都只有一个static成员实例 
//class Person
//{
//public:
//	Person()
//	{
//		_count++;
//	}
//protected:
//	string _name;
//public:
//	static int _count; //静态成员变量
//};
//int Person::_count = 0;
//
//class Student :public Person
//{
//public:
//	Student()
//	{}
//protected:
//	int _age;
//};
//
//class Graduate :public Student
//{
//protected:
//	int _id;
//};
//
//int main()
//{
//	Person p;
//	Student s;
//	Graduate g;
//	cout << Person::_count << endl;  //基类与派生类共有一个count
//	Student::_count = 0;
//	cout << Person::_count << endl;
//	system("pause");
//	return 0;
//}


////菱形继承与虚拟继承
//class Person
//{
//public:
//	string _name; // 姓名
//};
//
////class Student : virtual public Person  //虚拟继承
//class Student : public Person
//{
//protected:
//	int _num; //学号
//};
//
////class Teacher : virtual public Person  //虚拟继承
//class Teacher : public Person
//{
//protected:
//	int _id; // 职工编号
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};
//
//void Test()
//{	
//	Assistant a;
//	//a._name = "peter";// 这样会有二义性无法明确知道访问的是哪一个
//	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//虚拟继承解决数据冗余和二义性的原理
//采用内存窗口看
class A
{
public:
	int _a;
};

 class B : public A
//class B : virtual public A
{
public:
	int _b;
};

 class C : public A
//class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C   //B先入栈，然后C，最后D，最后还有一份公共的虚基类成员
{
public:
	int _d;
};

int main()
{
	D d;           //d的大小等于 sizeof(B) + sizeof(C) + 一份公共的虚基类成员
	d.B::_a = 1;   //这里的数值存储在公共的虚基类成员中，原本继承下来的B中的_a存放的是虚基表指针
	d.C::_a = 2;   //虚基表指针指向虚基表，虚基表里面存的是当前位置距离虚基类对象的偏移量
	d._b = 3;
	d._c = 4;
	d._d = 5;
	system("pause");
	return 0;
}
