#include <iostream>
using namespace std;

//时间类
class Time
{
public:
	//静态成员函数，无隐藏形参this指针，也有访问限定符的限制
	static int Print();

	//构造函数初始化列表
	Time(int hour = 13, int second = 9)
		//初始化列表，例 int a=5;
		:_hour(hour)
		, _second(second)
	{}//构造函数体，相当于赋值, 例 int a;  a=5;
//private:
	int _hour;
	int _second;
};

int Time::Print()
{
	//_hour = 7;  //静态成员不可以访问其它非静态成员，因为静态成员没有this指针
	return 9;
}

//日期类
class Data
{
	//友元函数
	friend ostream& operator<<(ostream& out, const Data& d);

public:

	Data(int year = 2021, int month = 1, int day = 1,int hour=12,int second=9);

	void Print();

private:
	int _year;
	int _month;
	int _day;
	Time t1;

	//静态成员变量，必须在类外进行初始化，存于数据段，所以不计入对象的大小，属于所有类对象共享
	static int count;
};
//定义时不用加static
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
//, count(year)   //必须在类外进行初始化

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