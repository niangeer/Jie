#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>
using namespace std;

class Data
{
public:
	//获得某年某月的最大天数
	int GetMonthDay(int year, int month);

	//构造函数
	Data(int year = 2020, int month = 1, int day = 1);

	//拷贝构造函数
	Data(const Data& d);

	//赋值运算符重载
	Data& operator=(const Data& d);

	// == 运算符重载
	bool operator==(const Data& d);

	// > 运算符重载
	bool operator>(const Data& d);

	// <= 运算符重载
	bool operator <= (const Data& d);

	// ！= 运算符重载
	bool operator!=(const Data& d);

	// >= 运算符重载
	bool operator>=(const Data& d);

	// < 运算符重载
	bool operator <(const Data& d);

	//更改不合法日期
	void Data::ChangeLegal(Data& d);

	//日期 += 天数
	Data& operator+=(int day);

	//日期 + 天数
	Data operator+(int day);

	//日期 -= 天数
	Data& operator-=(int day);

	//日期 - 天数
	Data operator-(int day);

	//前置++
	Data& operator++();

	//后置++
	Data operator++(int);

	//前置--
	Data& operator--();

	//后置--
	Data operator--(int);

	//日期 - 日期 ，返回天数
	int operator-(const Data& d);

	void Print();
private:
	int _year;
	int _month;
	int _day;
};

#endif 