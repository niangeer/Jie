//��Ŀ��ǰK����Ƶ��
//
//��Ŀ������
//��һ�ǿյĵ����б�����ǰ k �����ִ������ĵ��ʡ�
//���صĴ�Ӧ�ð����ʳ���Ƶ���ɸߵ������������ͬ�ĵ�������ͬ����Ƶ�ʣ�����ĸ˳������
//
//ʾ����
//
//���� : ["i", "love", "leetcode", "i", "love", "coding"], k = 2
//
// ��� : ["i", "love"]
//
//���� : "i" �� "love" Ϊ���ִ��������������ʣ���Ϊ2�Ρ� 
//	  ע�⣬����ĸ˳�� "i" �� "love" ֮ǰ��

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