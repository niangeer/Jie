#include "Data.h"

//���Թ��캯��
void Test1()
{
	Data d1(2021, 1, 1);
	d1.Print();
}

//���Կ������캯��
void Test2()
{
	Data d1;

	Data d2(d1);
	d2.Print();
	Data d3 = d1;
	d3.Print();
}

//���Ը�ֵ���������
void Test3()
{
	Data d1;
	d1.Print();

	Data d2(d1);
	d2.Print();
	Data d3 = d1;
	d3.Print();

	Data d4(2020, 9, 29);
	d1 = d2 = d3 = d4;
	d1.Print();
	d2.Print();
	d3.Print();
	d4.Print();
}

//���� > ���������
void Test4()
{
	Data d1(1990, 4, 17);
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 > d2)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}

//���� <= ���������
void Test5()
{
	Data d1(2027, 7, 4);
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 <= d2)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}

//���� == ���������
void Test6()
{
	Data d1(2021, 2, 7);
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 == d2)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}

//���� >= ���������
void Test7()
{
	Data d1(2021, 2, 7);
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 >= d2)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}

//���� < ���������
void Test8()
{
	Data d1;
	Data d2(2021, 3, 15);
	d1.Print();
	d2.Print();

	if (d1 < d2)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}

//���� != ���������
void Test9()
{
	Data d1(2021, 3, 15);
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 != d2)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}

int main()
{
	Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	//Test7();
	//Test8();
	Test9();

	system("pause");
	return 0;
}