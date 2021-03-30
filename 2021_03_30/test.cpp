//��Ŀ����֤���Ĵ�
//
//����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��
//
//˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���
//
//ʾ��1��
//���� : "A man, a plan, a canal: Panama"
//��� : true
//ʾ��2��
//���� : "race a car"
//��� : false

#include <iostream>
using namespace std;

class Solution {
public:
	bool isLetter(char ch)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
		{
			return true;
		}
		return false;
	}

	bool isPalindrome(string s) {
		// ��Сд��ĸת���ɴ�д���ٽ����ж�
		for (auto& ch : s)
		{
			if (ch >= 'A' && ch <= 'Z')
				ch += 32;
		}

		int left = 0;
		int right = s.size() - 1;

		while (left < right)
		{
			while (left < right && !isLetter(s[left]))
				left++;

			while (left < right && !isLetter(s[right]))
				right--;

			if (s[left] != s[right])
				return false;

			left++;
			right--;
		}

		return true;
	}
};