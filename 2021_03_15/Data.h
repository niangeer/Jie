#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>

using namespace std;

class Data
{
public:
	//���ĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);

	//���캯��
	Data(int year = 2020, int month = 9, int day = 27);

	//��������
	~Data();

	//�������캯��
	Data(const Data& d);

	//��ֵ���������
	Data& operator=(const Data& d);

	// > ���������
	bool operator>(const Data& d);

	// <= ���������
	bool operator<=(const Data& d);

	// == ���������
	bool operator==(const Data& d);

	// >= ���������
	bool operator>=(const Data& d);

	// < ���������
	bool operator<(const Data& d);

	// != ���������
	bool operator!=(const Data& d);

	void Print();
private:
	int _year;
	int _month;
	int _day;
};

#endif