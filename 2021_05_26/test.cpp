//题目：另类加法
//
//描述：
//给定两个int A和B。编写一个函数返回A + B的值，但不得使用 + 或其他算数运算符。
//
//测试样例：
//
//输入：
//1, 2
//返回：
//3


//解题思路：
//本题可以通过位运算实现，具体实现如下：
//两个数求和，其实就是 求和后当前位的数据 + 两个数求和的进位
//例如：
//1 + 2； 00000001 + 00000010
//求和后当前位的数据： 00000011 ； 求和后的进位数据： 没有进位，则 00000000
//两者相加，则得到： 00000011 就是3
//2 + 2； 00000010 + 00000010
//求和后当前位的数据： 00000000， 1和1进位后当前为变成0了
//求和后进位的数据： 00000100， 两个1求和后进位了
//相加后得到： 00000100 就是4
//求和后当前位的数据：简便的计算方法就是两个数进行异或 00000001 ^ 00000010 -> 00000011
//求和后进位的数据：简便的计算方法就是两个数相与后左移一位(00000010 & 00000010) << 1

class UnusualAdd {
public:
	int addAB(int A, int B) {
		if (A == 0) return B;
		if (B == 0) return A;
		int a = A ^ B;//求和后当前位的数据
		int b = (A & B) << 1;//求和后进位的数据
		return addAB(a, b);//递归两个数进行相加，任意为0时截止
	}
};