#include "Data.h"

//���ĳ��ĳ�µ��������
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
Data::Data(int year,int month,int day)
{
	if (!(month > 0 && month<13 && day>0 && day <= GetMonthDay(year, month)))
	{
		cout << "�������ڲ��Ϸ�" << endl;
	}

	_year = year;
	_month = month;
	_day = day;
}

//�������캯��
Data::Data(const Data& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

//��ֵ���������
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

// == ���������
bool Data::operator==(const Data& d)
{
	return _year == d._year \
		&& _month == d._month \
		&& _day == d._day;
}

// > ���������
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

// <= ���������
bool Data::operator <= (const Data& d)
{
	return !(*this > d);
}

// ��= ���������
bool Data::operator!=(const Data& d)
{
	return !(*this == d);
}

// >= ���������
bool Data::operator>=(const Data& d)
{
	return (*this > d) || (*this == d);
}

// < ���������
bool Data::operator <(const Data& d)
{
	return !(*this >= d);
}

//���Ĳ��Ϸ�����
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

//���� += ����
Data& Data::operator+=(int day)
{
	_day += day;
	ChangeLegal(*this);

	return *this;
}

//���� + ����
Data Data::operator+(int day)
{
	Data copyData(*this);
	copyData._day += day;
	ChangeLegal(copyData);

	return copyData;
}

//���� -= ����
Data& Data::operator-=(int day)
{
	_day -= day;
	ChangeLegal(*this);

	return *this;
}

//���� - ����
Data Data::operator-(int day)
{
	Data copyData(*this);
	copyData._day -= day;
	ChangeLegal(copyData);

	return copyData;
}

//ǰ��++
Data& Data::operator++()
{
	++_day;
	ChangeLegal(*this);
	return *this;
}

//����++
Data Data::operator++(int)
{
	Data copyData(*this);
	++_day;
	ChangeLegal(*this);
	return copyData;
}

//ǰ��--
Data& Data::operator--()
{
	--_day;
	ChangeLegal(*this);
	return *this;
}

//����--
Data Data::operator--(int)
{
	Data copyData(*this);
	_day--;
	ChangeLegal(*this);
	return copyData;
}

//���� - ���� ����������
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