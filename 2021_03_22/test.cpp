#include <iostream>
using namespace std;

//题目描述：
//
//将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。
//数值为0或者字符串不是一个合法的数值则返回0
//
//输入描述：
//输入一个字符串, 包括数字字母符号, 可以为空
//
//返回值描述：
//如果是合法的数值表达则返回该数字，否则返回0
//
//示例1：
//输入：
//"+2147483647"
//输出：
//2147483647
//
//示例2：
//输入：
//"1a33"
//输出：
//0

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;

		int symbol = 1;
		//处理负号
		if (str[0] == '-')
		{
			symbol = -1;
			str[0] = '0'; //这里是‘0’ 不是0
		}

		//处理正号
		else if (str[0] == '+')
		{
			symbol = 1;
			str[0] = '0';
		}

		int sum = 0;
		for (int i = 0; i<str.size(); ++i)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				sum = 0;
				break;
			}


			sum = sum * 10 + str[i] - '0';
		}
		return symbol * sum;
	}
};