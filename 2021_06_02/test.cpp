//题目：淘宝网店
//
//题目描述：
//    NowCoder在淘宝上开了一家网店。他发现在月份为素数的时候，当月每天能赚1元；否则每天能赚2元。
//    现在给你一段时间区间，请你帮他计算总收益有多少。
//
//输入描述 :输入包含多组数据。
//    每组数据包含两个日期from和to(2000 - 01 - 01 ≤ from ≤ to ≤ 2999 - 12 - 31)。
//    日期用三个正整数表示，用空格隔开：year month day。
//
//输出描述：
//    对应每一组数据，输出在给定的日期范围（包含开始和结束日期）内能赚多少钱。
//
//示例：
//	输入
//	2000 1 1 2000 1 31
//	2000 2 1 2000 2 29
//	输出
//	62
//	29

#include <iostream>
using namespace std;

bool LeapYear(int year) 
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int ProfitYear(int year) //年利润
{
	return 31 * 2 + 28 + 31 + 30 * 2 + 31 + 30 * 2 + 31 + 31 * 2 + 30 * 2 + 31 * 2 + 30 + 31 * 2 + LeapYear(year);
}

int ProSum(int year, int month, int day)
{
	int arr[13] = { 0, 62, 90, 121, 181, 212, 272, 303, 365, 425, 487, 517, 579 };
	int ret = 0;

	if (month == 2 || month == 3 || month == 5 || month == 7 || month == 11)
		ret = arr[month - 1] + day;
	else
		ret = arr[month - 1] + day * 2;

	if (LeapYear(year))
		ret++;

	return ret;
}

int main()
{
	int year1, month1, day1;
	int year2, month2, day2;
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int ret = 0;
		if (year1 == year2)
		{
			ret = ProSum(year2, month2, day2) - ProSum(year1, month1, day1);
		}
		else
		{
			//结束日期当年的利润
			ret = ProSum(year2, month2, day2);
			//开始日期当年的利润
			ret += ProfitYear(year1) - ProSum(year1, month1, day1);
			year1++;

			//中间年数的利润
			while (year1 != year2)
			{
				ret += ProfitYear(year1);
				year1++;
			}
		}
		cout << ret << endl;
	}
	return 0;
}