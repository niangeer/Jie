#include <iostream>
using namespace std;

////һ��final
//class Car final //��ʾ���޷����̳�
//{
//public:
//	virtual void Drive() //��ʾ���麯���޷�����д
//	{
//		cout << "hello " << endl;
//	}
//};
//class Benz :public Car
//{
//public:
//	//virtual void Drive() { cout << "Benz-����" << endl; }
//};
//int main()
//{
//	Car c;
//	Benz b;
//	system("pause");
//	return 0;
//}

////����override
////override: ����������麯���Ƿ���д�˻���ĳ���麯�������û����д���뱨��
//class Car{
//public:
//	virtual void Drive(){}
//};
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-����" << endl; }
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

////���������ࣨ�������麯�����ࣩ
//class Person
//{
//public:
//	virtual void func() = 0; //���麯��
//};
//class Student : public Person
//{
//public:
//	virtual void func()  //����������д����StudentҲΪ�����ࡣֻ����д���麯�������������ʵ����������
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
//	////Person p;   //�����಻��ʵ����������
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


////�ģ���̬��ԭ��
////�麯�����򿪵��Դ������ڴ�鿴
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


//��̬ԭ��
class Person
{
public:
	virtual void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
	int _a = 1;
};
class Student : public Person
{
public:
	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }
	int _b = 2;
};

void Test(Person& rp) //����ʹ��������ָ�룬��Ϊrp������ڱ���ʱ��ȷ����Person���;���Person���͵����
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