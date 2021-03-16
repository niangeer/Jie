#include "Data.h"

//获得某年某月的最大天数
int Data::GetMonthDay(int year, int month)
{
	static int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = arr[month];

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		days = 29;
	}

	return days;
}

//构造函数
Data::Data(int year,int month,int day)
{
	if (!(month > 0 && month<13 && day>0 && day <= GetMonthDay(year, month)))
	{
		cout << "以下日期不合法" << endl;
	}

	_year = year;
	_month = month;
	_day = day;
}

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

// == 运算符重载
bool Data::operator==(const Data& d)
{
	return _year == d._year \
		&& _month == d._month \
		&& _day == d._day;
}

// > 运算符重载
bool Data::operator>(const Data& d)
{
	if (_year > d._year)
		return true;

	else if (_year == d._year && _month > d._month)
		return true;

	else if (_year == d._year\
		&& _month == d._month\
		&& _day > d._day)
		return true;
	else
		return false;
}

// <= 运算符重载
bool Data::operator <= (const Data& d)
{
	return !(*this > d);
}

// ！= 运算符重载
bool Data::operator!=(const Data& d)
{
	return !(*this == d);
}

// >= 运算符重载
bool Data::operator>=(const Data& d)
{
	return (*this > d) || (*this == d);
}

// < 运算符重载
bool Data::operator <(const Data& d)
{
	return !(*this >= d);
}

//更改不合法日期
void Data::ChangeLegal(Data& d)
{
	if (d._day <= 0)
	{
		while (d._day <= 0)
		{
			--d._month;
			if (0 == d._month)
			{
				--d._year;
				d._month = 12;
			}

			d._day += GetMonthDay(d._year, d._month);
		}
	}
	else  // day > 0
	{
		while (d._day > GetMonthDay(d._year, d._month))
		{
			d._day -= GetMonthDay(d._year, d._month);
			++d._month;
			if (13 == d._month)
			{
				++d._year;
				d._month = 1;
			}
		}
	}
}

//日期 += 天数
Data& Data::operator+=(int day)
{
	_day += day;
	ChangeLegal(*this);

	return *this;
}

//日期 + 天数
Data Data::operator+(int day)
{
	Data copyData(*this);
	copyData._day += day;
	ChangeLegal(copyData);

	return copyData;
}

//日期 -= 天数
Data& Data::operator-=(int day)
{
	_day -= day;
	ChangeLegal(*this);

	return *this;
}

//日期 - 天数
Data Data::operator-(int day)
{
	Data copyData(*this);
	copyData._day -= day;
	ChangeLegal(copyData);

	return copyData;
}

//前置++
Data& Data::operator++()
{
	++_day;
	ChangeLegal(*this);
	return *this;
}

//后置++
Data Data::operator++(int)
{
	Data copyData(*this);
	++_day;
	ChangeLegal(*this);
	return copyData;
}

//前置--
Data& Data::operator--()
{
	--_day;
	ChangeLegal(*this);
	return *this;
}

//后置--
Data Data::operator--(int)
{
	Data copyData(*this);
	_day--;
	ChangeLegal(*this);
	return copyData;
}

//日期 - 日期 ，返回天数
int Data::operator-(const Data& d)
{
	Data max = *this;
	Data min = d;
	int flag = 1;

	if (*this < d)
	{
		max = d;
		min = *this;
		int flag = -1;
	}

	int day = 0;
	while (max != min)
	{
		day++;
		min++;
	}
	return flag*day;
}

void Data::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}