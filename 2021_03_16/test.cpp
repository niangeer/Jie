#include "Data.h"

//²âÊÔ¹¹Ôì¡¢¿½±´¹¹Ôì¡¢¸³ÖµÔËËã·ûÖØÔØ
void Test1()
{
	Data d1(2020, 7, 7);
	d1.Print();

	Data d2(d1);
	d2.Print();

	Data d3;
	d3.Print();
	d1 = d2 = d3;
	d1.Print();
	d2.Print();
	d3.Print();
}

//²âÊÔ > ÔËËã·ûÖØÔØ
void Test2()
{
	Data d1;
	Data d2(2021, 9, 7);
	d1.Print();
	d2.Print();

	if (d1 > d2)
		cout << 1 << endl;
}

//²âÊÔ == ÔËËã·ûÖØÔØ
void Test3()
{
	Data d1;
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 == d2)
		cout << 1 << endl;
}

//²âÊÔ £¡= ÔËËã·ûÖØÔØ
void Test4()
{
	Data d1;
	Data d2(2021, 1, 1);
	d1.Print();
	d2.Print();

	if (d1 != d2)
		cout << 1 << endl;
}

void Test5()
{
	Data d1;
	Data d2(2021, 1, 1);
	d1.Print();
	d2.Print();

	if (d1 <= d2)
		cout << 1 << endl;
}

//²âÊÔ < ÔËËã·ûÖØÔØ
void Test6()
{
	Data d1;
	Data d2(2021, 1, 1);
	d1.Print();
	d2.Print();

	if (d1 < d2)
		cout << 1 << endl;
}

//²âÊÔ >= ÔËËã·ûÖØÔØ
void Test7()
{
	Data d1(2021, 1, 1);
	Data d2;
	d1.Print();
	d2.Print();

	if (d1 >= d2)
		cout << 1 << endl;
}

//²âÊÔ += ÔËËã·ûÖØÔØ
void Test8()
{
	Data d1;
	d1.Print();

	d1 += -32;
	d1.Print();
}

//²âÊÔ + ÔËËã·ûÖØÔØ
void Test9()
{
	Data d1;
	d1.Print();

	Data d2;
	d2 = d1 + 60;
	d1.Print();
	d2.Print();
}

//²âÊÔ -= ÔËËã·ûÖØÔØ
void Test10()
{
	Data d1;
	d1.Print();

	d1 -= -60;
	d1.Print();
}

//²âÊÔ - ÔËËã·ûÖØÔØ
void Test11()
{
	Data d1;
	d1.Print();

	Data d2;
	d2 = (d1 - 62);
	d1.Print();
	d2.Print();
}

//²âÊÔÇ°ÖÃ++¡¢ºóÖÃ++¡¢Ç°ÖÃ--¡¢ºóÖÃ--
void Test12()
{
	//Ç°ÖÃ++
	Data d1;
	d1.Print();
	++d1;
	d1.Print();

	//ºóÖÃ++
	Data d3;
	Data d4;
	d3.Print();
	d4 = d3++;
	d3.Print();
	d4.Print();

	//Ç°ÖÃ--
	Data d5;
	d5.Print();
	--d5;
	d5.Print();

	//ºóÖÃ--
	Data d7;
	Data d8;
	d7.Print();
	d8 = d7--;
	d7.Print();
	d8.Print();
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	//Test7();
	//Test8();
	//Test9();
	//Test10();
	//Test11();
	Test12();

	system("pause");
	return 0;
}