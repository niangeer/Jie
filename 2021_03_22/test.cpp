#include <iostream>
using namespace std;

//��Ŀ������
//
//��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯����
//��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
//
//����������
//����һ���ַ���, ����������ĸ����, ����Ϊ��
//
//����ֵ������
//����ǺϷ�����ֵ����򷵻ظ����֣����򷵻�0
//
//ʾ��1��
//���룺
//"+2147483647"
//�����
//2147483647
//
//ʾ��2��
//���룺
//"1a33"
//�����
//0

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;

		int symbol = 1;
		//������
		if (str[0] == '-')
		{
			symbol = -1;
			str[0] = '0'; //�����ǡ�0�� ����0
		}

		//��������
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