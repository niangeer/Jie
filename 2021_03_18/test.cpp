#include <iostream>
using namespace std;

class Data;

class Time
{
	//Data是Time的友元类
	friend class Data;
public:
	Time(int hour = 7, int minute = 5, int second = 9)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
	Time(const Time& t)
	{
		_hour = t._hour;
		_minute = t._minute;
		_second = t._second;
	}
	void Print()
	{
		cout << _hour << "时" << _minute << "分" << _second << "秒" << endl;
		//cout <<_d._year << endl;  //Data可以访问Time，Time不可以访问Data
	}
private:
	int _hour;
	int _minute;
	int _second;
	//静态成员变量
	static int _size;
	//Data _d;
};
//静态成员变量必须类体外定义
int Time::_size = 1;

class Data
{
	//友元函数
	friend istream& operator>>(istream& in, Data& d);
	friend ostream& operator<<(ostream& out, const Data& d);
public:
	Data(int year = 2021, int month = 9, int day = 2);
	Data(const Data& d);
	Data& operator=(const Data& d);

	//Data是Time的友元，可以通过Time对象访问Time私有成员，也可通过类名访问静态成员
	void Print()
	{
		cout << _t._hour << "时" << _t._minute << "分" << _t._second << "秒" << endl;
		cout << Time::_size << endl;
	}
	//静态成员函数
	static void Show()
	{
		//cout << _year << endl;  //静态成员函数无this 指针，不能访问非静态成员
	}

private:
	int _year;
	int _month;
	int _day;

	Time _t;
};

//构造函数
Data::Data(int year, int month, int day)
:_year(year)
, _month(month)
, _day(day)
, _t()
{}

//拷贝构造函数
Data::Data(const Data& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

//赋值运算符重载
Data& Data::operator=(const Data& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}

//友元函数是全局函数
istream& operator>>(istream& in, Data& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}

ostream& operator<<(ostream& out, const Data& d)
{
	out << d._year << "-" << d._month << "-" << d._day << endl;
	return out;
}

int main()
{
	Data d1(2023,1,6);
	Data d2(d1);
	cout << d1 << d2;
	//cin >> d1 >> d2;
	//cout << d1 << d2;
	d1.Print();
	system("pause");
	return 0;
}



////内部类：相当于内部类是外部类的友元类（例:Time是Data的内部类）
//class Data
//{
//public:
//	Data(int year = 2020, int month = 1, int day = 9)
//		:_year(year)
//		,_month(month)
//		, _day(day)
//	{}
//	Data(const Data& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Data& operator=(const Data& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = _day;
//		}
//		return *this;
//	}
//	class Time
//	{
//	public:
//		Time(int hour, int minute, int second)
//			:_hour(hour)
//			, _minute(minute)
//			, _second(second)
//		{}
//		Time(const Time& t)
//		{
//			_hour = t._hour;
//			_minute = t. _minute;
//			_second = t._second;
//		}
//		Time& operator=(const Time& t)
//		{
//			if (this != &t)
//			{
//				_hour = t._hour;
//				_minute = t._minute;
//				_second = t._second;
//			}
//			return *this;
//		}
//
//		void Print(const Data& d)
//		{
//			cout << ++_size << endl;    //可以直接访问静态成员
//			cout << d._year << endl;    //通过对象访问Data私有成员
//			cout << d._year << "年" << d._month << "月" << d._day << "日"\
//				<< _hour << "时" << _minute << "分" << _second << "秒" << endl;
//		}
//	private:
//		int _hour;
//		int _minute;
//		int _second;
//	};
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	static int _size;
//};
//
//int Data::_size = 1;
//
//int main()
//{
//	Data::Time t1(12,8,4);
//	Data d1(2049, 7, 7);
//	t1.Print(d1);
//
//	system("pause");
//	return 0;
//}