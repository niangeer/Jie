//题目：前K个高频词
//
//题目描述：
//给一非空的单词列表，返回前 k 个出现次数最多的单词。
//返回的答案应该按单词出现频率由高到低排序。如果不同的单词有相同出现频率，按字母顺序排序。
//
//示例：
//
//输入 : ["i", "love", "leetcode", "i", "love", "coding"], k = 2
//
// 输出 : ["i", "love"]
//
//解析 : "i" 和 "love" 为出现次数最多的两个单词，均为2次。 
//	  注意，按字母顺序 "i" 在 "love" 之前。

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <functional>
using namespace std;

class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		map<string, int> countMap;
		for (const auto& s : words)
		{
			countMap[s]++;
		}

		multimap<int, string, greater<int>> retM;
		for (const auto& e : countMap)
		{
			retM.insert(make_pair(e.second, e.first));
		}

		vector<string> v;
		for (const auto& e : retM)
		{
			v.push_back(e.second);
			k--;
			if (k == 0)
			{
				break;
			}
		}
		return v;
	}
};