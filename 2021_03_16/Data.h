#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>
using namespace std;

class Data
{
public:
	//���ĳ��ĳ�µ��������
	int GetMonthDay(int year, int month);

	//���캯��
	Data(int year = 2020, int month = 1, int day = 1);

	//�������캯��
	Data(const Data& d);

	//��ֵ���������
	Data& operator=(const Data& d);

	// == ���������
	bool operator==(const Data& d);

	// > ���������
	bool operator>(const Data& d);

	// <= ���������
	bool operator <= (const Data& d);

	// ��= ���������
	bool operator!=(const Data& d);

	// >= ���������
	bool operator>=(const Data& d);

	// < ���������
	bool operator <(const Data& d);

	//���Ĳ��Ϸ�����
	void Data::ChangeLegal(Data& d);

	//���� += ����
	Data& operator+=(int day);

	//���� + ����
	Data operator+(int day);

	//���� -= ����
	Data& operator-=(int day);

	//���� - ����
	Data operator-(int day);

	//ǰ��++
	Data& operator++();

	//����++
	Data operator++(int);

	//ǰ��--
	Data& operator--();

	//����--
	Data operator--(int);

	//���� - ���� ����������
	int operator-(const Data& d);

	void Print();
private:
	int _year;
	int _month;
	int _day;
};

#endif 