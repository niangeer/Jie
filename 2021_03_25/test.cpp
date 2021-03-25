//题目：仅仅反转大小写字母
//
//给定一个字符串 S，返回 “反转后的” 字符串，
//其中不是字母的字符都保留在原地，而所有字母的位置发生反转
//
//示例1：
//输入："ab-cd"
//输出："dc-ba"
//
//示例2：
//输入："a-bC-dEf-ghIj"
//输出："j-Ih-gfE-dCba"

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