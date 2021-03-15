#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>

using namespace std;

class Data
{
public:
	//获得某年某月的天数
	int GetMonthDay(int year, int month);

	//构造函数
	Data(int year = 2020, int month = 9, int day = 27);

	//析构函数
	~Data();

	//拷贝构造函数
	Data(const Data& d);

	//赋值运算符重载
	Data& operator=(const Data& d);

	// > 运算符重载
	bool operator>(const Data& d);

	// <= 运算符重载
	bool operator<=(const Data& d);

	// == 运算符重载
	bool operator==(const Data& d);

	// >= 运算符重载
	bool operator>=(const Data& d);

	// < 运算符重载
	bool operator<(const Data& d);

	// != 运算符重载
	bool operator!=(const Data& d);

	void Print();
private:
	int _year;
	int _month;
	int _day;
};

#endif