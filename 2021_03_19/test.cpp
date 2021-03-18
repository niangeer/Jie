#include <iostream>
using namespace std;

//new   相当于operator new + 构造函数
//            operator new相当于 malloc + malloc失败后抛异常

//delete相当于析构函数 + operator delete
//                       operator delete相当于free


////对于申请内置类型的空间 new、delete与malloc、free用法基本类似
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


//申请自定义类型的空间时,malloc、free只会申请与释放空间
//                       new会在申请空间后调用构造函数进行初始化
//                       delete会在释放空间前调用析构函数进行对象中资源的清理
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
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;

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
