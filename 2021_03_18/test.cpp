#include <iostream>
using namespace std;

class Data;

class Time
{
	//Data��Time����Ԫ��
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
		cout << _hour << "ʱ" << _minute << "��" << _second << "��" << endl;
		//cout <<_d._year << endl;  //Data���Է���Time��Time�����Է���Data
	}
private:
	int _hour;
	int _minute;
	int _second;
	//��̬��Ա����
	static int _size;
	//Data _d;
};
//��̬��Ա�������������ⶨ��
int Time::_size = 1;

class Data
{
	//��Ԫ����
	friend istream& operator>>(istream& in, Data& d);
	friend ostream& operator<<(ostream& out, const Data& d);
public:
	Data(int year = 2021, int month = 9, int day = 2);
	Data(const Data& d);
	Data& operator=(const Data& d);

	//Data��Time����Ԫ������ͨ��Time�������Time˽�г�Ա��Ҳ��ͨ���������ʾ�̬��Ա
	void Print()
	{
		cout << _t._hour << "ʱ" << _t._minute << "��" << _t._second << "��" << endl;
		cout << Time::_size << endl;
	}
	//��̬��Ա����
	static void Show()
	{
		//cout << _year << endl;  //��̬��Ա������this ָ�룬���ܷ��ʷǾ�̬��Ա
	}

private:
	int _year;
	int _month;
	int _day;

	Time _t;
};

//���캯��
Data::Data(int year, int month, int day)
:_year(year)
, _month(month)
, _day(day)
, _t()
{}

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

//��Ԫ������ȫ�ֺ���
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



////�ڲ��ࣺ�൱���ڲ������ⲿ�����Ԫ�ࣨ��:Time��Data���ڲ��ࣩ
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
//			cout << ++_size << endl;    //����ֱ�ӷ��ʾ�̬��Ա
//			cout << d._year << endl;    //ͨ���������Data˽�г�Ա
//			cout << d._year << "��" << d._month << "��" << d._day << "��"\
//				<< _hour << "ʱ" << _minute << "��" << _second << "��" << endl;
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