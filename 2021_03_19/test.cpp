#include <iostream>
using namespace std;

//new   �൱��operator new + ���캯��
//            operator new�൱�� malloc + mallocʧ�ܺ����쳣

//delete�൱���������� + operator delete
//                       operator delete�൱��free


////���������������͵Ŀռ� new��delete��malloc��free�÷���������
//int main()
//{
//	int *p1 = (int *)malloc(sizeof(int));
//	int *p2 = (int *)malloc(sizeof(int)* 9);
//	int *p3 = new int(10);
//	int *p4 = new int;
//	int *p5 = new int[9];
//
//	free(p1);
//	free(p2);
//	delete p3;
//	delete p4;
//	delete[] p5;
//	system("pause");
//	return 0;
//}


//�����Զ������͵Ŀռ�ʱ,malloc��freeֻ���������ͷſռ�
//                       new��������ռ����ù��캯�����г�ʼ��
//                       delete�����ͷſռ�ǰ���������������ж�������Դ������
class Data
{
	friend ostream& operator<<(ostream& out, const Data& d);
public:
	Data(int year = 2021, int month = 5, int day = 2)
		:_year(year)
		, _month(month)
		, _day(day)
	{}

	Data(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Data& d)
{
	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;

	return out;
}

int main()
{
	Data d1;
	cout << d1;

	Data* p1 = (Data*)malloc(sizeof(Data));
	Data* p2 = (Data*)malloc(sizeof(Data)* 10);
	Data* p3 = new Data;
	Data* p4 = new Data(1222, 7, 27);
	Data* p5 = new Data[10];

	cout << *p5;
	cout << *(p5 + 1);

	free(p1);
	free(p2);
	delete p3;
	delete p4;
	delete[] p5;
	system("pause");
	return 0;
}
