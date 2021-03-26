//��Ŀ���ַ������
//
//���������ַ�����ʽ�ķǸ����� num1 ��num2 ���������ǵĺ͡�
//
//1��num1 ��num2 ��ֻ�������� 0 - 9
//2������ʹ���κ΃Ƚ� BigInteger �⣬ Ҳ����ֱ�ӽ�������ַ���ת��Ϊ������ʽ
//3��num1 ��num2 ���������κ�ǰ����
//4��num1 ��num2 �ĳ��ȶ�С�� 5100

#include <iostream>
using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {
		//����num1��num2����Ч�±�
		int end1 = num1.size() - 1;
		int end2 = num2.size() - 1;

		int next = 0;  //��λ
		string ret = "";  //������Ž��

		//���������num1��num2һ�����������ӵ����н�λ
		while (end1 >= 0 || end2 >= 0 || next == 1)
		{
			//��num1 δ��ȡ������ת��Ϊ0~9����������ȡ������ֵΪ0
			int x1 = end1 >= 0 ? num1[end1] - '0' : 0;
			//��num2 δ��ȡ������ת��Ϊ0~9����������ȡ������ֵΪ0
			int x2 = end2 >= 0 ? num2[end2] - '0' : 0;

			int retch = x1 + x2 + next;
			//���������ret
			ret += retch % 10 + '0';
			//������һ�����ʱ��λ�Ĵ�С
			next = retch / 10;

			//����
			end1--;
			end2--;
		}
		//������Ľ�����з�ת 
		reverse(ret.begin(), ret.end());

		return ret;
	}
};
