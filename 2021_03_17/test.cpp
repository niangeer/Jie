#include <iostream>
using namespace std;

//ʱ����
class Time
{
public:
	//��̬��Ա�������������β�thisָ�룬Ҳ�з����޶���������
	static int Print();

	//���캯����ʼ���б�
	Time(int hour = 13, int second = 9)
		//��ʼ���б��� int a=5;
		:_hour(hour)
		, _second(second)
	{}//���캯���壬�൱�ڸ�ֵ, �� int a;  a=5;
//private:
	int _hour;
	int _second;
};

int Time::Print()
{
	//_hour = 7;  //��̬��Ա�����Է��������Ǿ�̬��Ա����Ϊ��̬��Աû��thisָ��
	return 9;
}

//������
class Data
{
	//��Ԫ����
	friend ostream& operator<<(ostream& out, const Data& d);

public:

	Data(int year = 2021, int month = 1, int day = 1,int hour=12,int second=9);

	void Print();

private:
	int _year;
	int _month;
	int _day;
	Time t1;

	//��̬��Ա������������������г�ʼ�����������ݶΣ����Բ��������Ĵ�С�����������������
	static int count;
};
//����ʱ���ü�static
int Data::count = 0;

ostream& operator<<(ostream& out, const Data& d)
{
	out << d._year << "-" << d._month << "-" << d._day << endl;
	return out;
}

Data::Data(int year, int month, int day, int hour, int second)
:_year(year)
, _month(month)
, _day(day)
, t1(hour,second)
//, count(year)   //������������г�ʼ��

{}

void Data::Print()
{
	cout << _year << "-" << _month << "-" << _day <<"-"<< t1._hour <<"-"<< t1._second << endl;
	cout << Data::count++ << endl;
	cout << Time::Print() << endl;
}


int main()
{
	Data d1;
	d1.Print();
	cout << d1 << endl;
	Data d2(2023,1,1,9,9);
	d2.Print();

	system("pause");
	return 0;
}