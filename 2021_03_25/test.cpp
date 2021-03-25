//��Ŀ��������ת��Сд��ĸ
//
//����һ���ַ��� S������ ����ת��ġ� �ַ�����
//���в�����ĸ���ַ���������ԭ�أ���������ĸ��λ�÷�����ת
//
//ʾ��1��
//���룺"ab-cd"
//�����"dc-ba"
//
//ʾ��2��
//���룺"a-bC-dEf-ghIj"
//�����"j-Ih-gfE-dCba"

#include <iostream>
using namespace std;

class Solution {
public:
	bool isLetter(char ch)
	{
		if (ch >= 'a' && ch <= 'z')
			return true;

		if (ch >= 'A' && ch <= 'Z')
			return true;

		return false;
	}

	string reverseOnlyLetters(string S) {
		if (S.empty())
			return S;

		size_t begin = 0, end = S.size() - 1;
		while (begin < end)
		{
			while (begin < end && !isLetter(S[begin]))
				begin++;

			while (begin <end && !isLetter(S[end]))
				end--;

			swap(S[begin], S[end]);

			begin++; end--;
		}
		return S;
	}
};