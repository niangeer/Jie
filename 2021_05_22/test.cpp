#include <iostream>
#include <string>
using namespace std;

////�����Ժ��ַ�ʽ�̳У������private��Ա���������в��ɼ���
////����
//class Person  
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//	}
//protected:
//	char* _name = "С��";  //��ȱʡֵ
//	int _age = 18;
//};
//
////������     �̳з�ʽ
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
//	int b = sizeof(Student);  //�����С���ڸ����С�����Լ��ĳ�Ա����
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}


////��������������ֵת��
//class Person
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//	}
//
//	string _name = "С��";
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
//	s._name = "С��";
//	s._age = 12;
//	p = s;             //��������Ը�ֵ�����࣬�����и����Ƭ��������̲�������ʽ����ת��
//	//s = p;             //���಻���Ը�ֵ��������
//
//	Person* ptr1 = &p;  //������������ָ�������ÿ��Ի��ำֵ
//	Person& ref1 = p;
//	Person* ptr2 = &s;
//	Person& ref2 = s;
//
//	//����ָ����������ǿ���ת����������ָ���������
//	Student* ptr3 = (Student*)ptr2;
//	Student& ref3 = (Student&)ref2;
//	ptr3->_name = "����";
//	ptr3->_stuid = 1;
//
//	//��������ǿתΪ�����࣬����Խ�����
//	Student* ptr4 = (Student*)ptr1;
//	Student& ref4 = (Student&)ref1;
//	ptr4->_name = "СС";
//	ptr4->_stuid = 2;  //Խ��
//
//	system("pause");
//	return 0;
//}


////�ڼ̳���ϵ�л���������඼�ж�����������
////��Ա���������أ�ֻ��Ҫ��������ͬ�͹������ء�
//class Person
//{
//public:
//	void func()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//	}
//protected:
//	string _name = "С��";
//	int _age = 18;
//};
//
//class Student : public Person
//{
//public:
//	void func()
//	{
//		cout << " ����:" << _name << endl;
//		cout << " ����:" << Person::_age << endl;
//		cout << " ����:" << _age << endl;
//	}
//protected:
//	int _age = 1;
//};
//
//int main()
//{
//	Student s;
//	s.func();    //���õ����������func,�ض���,ͬһ�������������
//	s.Person::func(); //���û���func,��Ҫ��ʾ������
//
//	system("pause");
//	return 0;
//}


////�����������Ĭ�����ɺ���
//class Person
//{
//public:
//	Person(const string& str = "С��", int age = 18)
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
//	//�̳������ĸ��ಿ�ֵĳ�Ա��Ҫʹ�ø���Ĺ��캯��ȥ��ʼ���������Լ���ʾ��ȥ��ʼ��
//	Student(const string& str = "С��", int age = 18, int id = 111)
//	:Person(str, age)
//	//, _name(str)    //�����Լ���ʾ��ȥ��ʼ��
//	//, _age(age)
//	, _stuid(id)
//	{
//		cout << "Student()" << endl;
//	}
//
//	//�������죬��ֵ���أ���������ϵͳ�Զ����ɵ�
//	Student(const Student& s)
//		:Person(s)    //������Ը�ֵ������
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
//			Person::operator=(s);    //ע������ĸ�ֵ��ʽ
//			_stuid = s._stuid;
//		}
//		return *this;
//	}
//
//	//������������������ע���
//	//1����������������͸�������������������أ���������������������ֻᱻͬһ�����destructor
//	//2���Լ���ʾ���ã����ڸ��������������⣬�����Ϲ���
//	~Student()
//	{
//		//Person::Person();  ��ϵͳ�Զ�ȥ���ã��Լ���ʾ���û���ڸ���������������
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _stuid;
//};
//
//void test()
//{
//	Student s1("С��", 12, 12247);
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

////�̳�����Ԫ
////�������Ԫ��ϵ���̳и�������
//class Student;
//class Person
//{
//	friend void func(const Person& p, const Student& s);
//protected:
//	string _name = "С��";
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
//	//cout << s._age << endl; //������Ԫ���ɷ���������˽���뱣��
//}
//int main()
//{
//	Person p;
//	Student s;
//	func(p, s);
//	system("pause");
//	return 0;
//}

////�̳��뾲̬��Ա
////���ඨ����static��̬��Ա���������̳���ϵ����ֻ��һ�������ĳ�Ա
////�������������ٸ����࣬��ֻ��һ��static��Աʵ�� 
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
//	static int _count; //��̬��Ա����
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
//	cout << Person::_count << endl;  //�����������๲��һ��count
//	Student::_count = 0;
//	cout << Person::_count << endl;
//	system("pause");
//	return 0;
//}


////���μ̳�������̳�
//class Person
//{
//public:
//	string _name; // ����
//};
//
////class Student : virtual public Person  //����̳�
//class Student : public Person
//{
//protected:
//	int _num; //ѧ��
//};
//
////class Teacher : virtual public Person  //����̳�
//class Teacher : public Person
//{
//protected:
//	int _id; // ְ�����
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//
//void Test()
//{	
//	Assistant a;
//	//a._name = "peter";// �������ж������޷���ȷ֪�����ʵ�����һ��
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
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

//����̳н����������Ͷ����Ե�ԭ��
//�����ڴ洰�ڿ�
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

class D : public B, public C   //B����ջ��Ȼ��C�����D�������һ�ݹ�����������Ա
{
public:
	int _d;
};

int main()
{
	D d;           //d�Ĵ�С���� sizeof(B) + sizeof(C) + һ�ݹ�����������Ա
	d.B::_a = 1;   //�������ֵ�洢�ڹ�����������Ա�У�ԭ���̳�������B�е�_a��ŵ��������ָ��
	d.C::_a = 2;   //�����ָ��ָ�������������������ǵ�ǰλ�þ������������ƫ����
	d._b = 3;
	d._c = 4;
	d._d = 5;
	system("pause");
	return 0;
}
