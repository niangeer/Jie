#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	virtual void BuyTicket()
	{
		cout << "������Ʊ_ȫ��" << endl;
	}
};

class Student : public Person
{
public:
	/*ע�⣺����д�����麯��ʱ����������麯���ڲ���virtual�ؼ���ʱ����ȻҲ���Թ�����д(��Ϊ��
	�к������麯�����̳������������������ɱ����麯������),���Ǹ���д�����Ǻܹ淶������������ʹ��*/
	virtual void BuyTicket()
	{
		cout << "ѧ����Ʊ_���" << endl;
	}
};

//�����̬��ָ��˭�͵���˭���麯��
//1. ����ͨ�������ָ��������õ����麯��
//2. �����õĺ����������麯���������������Ի�����麯��������д
//�麯����д������
//a���������еĺ��������麯��
//b��������������������ֵ��Ҫ��ͬ
//�������̬���������йأ�p��ʲô���ͣ��͵�������͵ĳ�Ա����

//ע�⣺
//������д���������⣺ (1)Э�� (2)������������д
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



////Э��
////��������д�����麯��ʱ��������麯������ֵ���Ͳ�ͬ���������麯�����ػ�������ָ��������ã�
////�������麯����������������ָ���������ʱ����ΪЭ�䡣
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
//		cout << "������Ʊ_ȫ��" << endl;
//		return nullptr;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual B* BuyTicket()
//	{
//		cout << "ѧ����Ʊ_���" << endl;
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


////��������
////�����������������������������⴦���������������������ͳһ�����destructor
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
////ֻ��������Student������������д��Person�����������������delete�����������������
////���ܹ��ɶ�̬�����ܱ�֤p1��p2ָ��Ķ�����ȷ�ĵ�������������
//
//int main()
//{
//	Person* p1 = new Person;
//	Person* p2 = new Student;  //������Ƭ���и��Ϊ
//	delete p1;
//	delete p2;                 //��������Student���������ܻ��ڴ�й©
//	system("pause");
//	return 0;
//}