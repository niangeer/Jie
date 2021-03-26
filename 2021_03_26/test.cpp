//题目：字符串相加
//
//给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。
//
//1，num1 和num2 都只包含数字 0 - 9
//2，不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式
//3，num1 和num2 都不包含任何前导零
//4，num1 和num2 的长度都小于 5100

#include <iostream>
using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {
		//计算num1与num2的有效下标
		int end1 = num1.size() - 1;
		int end2 = num2.size() - 1;

		int next = 0;  //进位
		string ret = "";  //用来存放结果

		//有种情况是num1与num2一样长且最后相加的数有进位
		while (end1 >= 0 || end2 >= 0 || next == 1)
		{
			//若num1 未读取完则将其转化为0~9的数，若读取完它的值为0
			int x1 = end1 >= 0 ? num1[end1] - '0' : 0;
			//若num2 未读取完则将其转化为0~9的数，若读取完它的值为0
			int x2 = end2 >= 0 ? num2[end2] - '0' : 0;

			int retch = x1 + x2 + next;
			//将结果存入ret
			ret += retch % 10 + '0';
			//计算下一轮相加时进位的大小
			next = retch / 10;

			//迭代
			end1--;
			end2--;
		}
		//将计算的结果进行翻转 
		reverse(ret.begin(), ret.end());

		return ret;
	}
};
