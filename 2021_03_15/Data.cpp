#include "Data.h"

//���ĳ��ĳ�µ�����
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

//���캯��
Data::Data(int year, int month, int day)
{
	if (!(month > 0 && month <13 && day>0 && day <= GetMonthDay(year, month)))
	{
		cout << "�������ڷǷ�" << endl;
	}

	this->_year = year;
	this->_month = month;
	this->_day = day;
}

//��������
Data::~Data()
{
	cout << "�ѵ���~Data()" << endl;
}

//�������캯��
Data::Data(const Data& d)
{
	this->_year = d._year;
	this->_month = d._month;
	this->_day = d._day;
}

//��ֵ���������
Data& Data::operator=(const Data& d)
{
	this->_year = d._year;
	this->_month = d._month;
	this->_day = d._day;

	return *this;
}

// > ���������
bool Data::operator>(const Data& d)
{
	if (this->_year > d._year)
		return true;

	else if (this->_year == d._year && this->_month > d._month)
		return true;

	else if (this->_year == d._year && this->_month == d._month && this->_day > d._day)
		return true;

	else
		return false;
}

// <= ���������
bool Data::operator<=(const Data& d)
{
	return !(*this > d);
}

// == ���������
bool Data::operator==(const Data& d)
{
	return this->_year == d._year\
		&& this->_month == d._month\
		&& this->_day == d._day;
}

// >= ���������
bool Data::operator>=(const Data& d)
{
	return (*this > d) || (*this == d);
}

// < ���������
bool Data::operator<(const Data& d)
{
	return !(*this >= d);
}

// != ���������
bool Data::operator!=(const Data& d)
{
	return !(*this == d);
}

void Data::Print()
{
	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
}