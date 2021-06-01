//题目：求最大连续bit数
//
//题目描述：求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1
//
//输入描述：输入一个byte数字
//
//输出描述：输出转成二进制之后连续1的个数
//
//示例1
//输入：
//3
//5
//输出：
//2
//1
//
//说明：
//3的二进制表示是11，最多有2个连续的1。
//5的二进制表示是101，最多只有1个连续的1。

//解题思路：
//根据位运算，获取每一位的二进制值。获取第i位的值：(n >> i) & 1。如果1连续，则计数累加，如果不连续，
//则从0开始计数。

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		int maxCount = 0;
		// n右移32次就变为0
		while (n)
		{
			//获取当前位的二进制值
			if (n & 1)
			{
				//如果1的值连续，计数累加，并且跟新最大计数
				++count;
				maxCount = max(count, maxCount);
			}
			else
			{
				//如果1的值不连续，重新累加
				count = 0;
			}
			//右移一次，为获取下一位二进制值做准备
			n = n >> 1;
		}
		cout << maxCount << endl;
	}
	system("pause");
	return 0;
}