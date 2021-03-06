//计算日期到天数转换
//
//描述：根据输入的日期，计算是这一年的第几天。
//
//输入描述：输入一行，每行空格分割，分别是年，月，日
//输出描述：输出是这一年的第几天
//
//示例1
//输入：
//2012 12 31
//输出：
//366
//
//示例2
//输入：
//1982 3 4
//输出：
//63


//解题思路：
//用一个数组存放每月的累积天数
//输入的日期天数 = 当月的天数 + 当月之前的累积天数
//如果包含二月，再去判断是否为闰年，如果是闰年，再加1天即可

#include <iostream>
using namespace std;

int main()
{
	int daysArray[13] = { 0, 31, 59, 90, 120, 151, 181, \
		212, 243, 273, 304, 334, 365 };

	int year, month, day;
	int n;

	while (cin >> year >> month >> day)
	{

		n = daysArray[month - 1] + day;
		if (month > 2 && \
			((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			n++;
		}
		cout << n << endl;
	}
	return 0;
}
