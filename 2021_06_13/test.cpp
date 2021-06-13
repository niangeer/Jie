#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

//key模型: set  multiset(可插入重复的值)
//1，排序+去重
//2，查找在不在（key不可修改）
//3，set.find()为O(logN), 算法中的find()为O(N)
void TestSet()
{
	set<int> s1;
	s1.insert(1);
	s1.insert(19);
	s1.insert(16);
	s1.insert(12);
	s1.insert(15);
	s1.insert(112);
	s1.insert(13);

	set<int>::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (const auto& e : s1)
	{
		cout << e << " ";
	}
	cout << endl;
}

//   key / value的搜索模型 -》 map
//   a, 查找在不在
//   b, 排序+去重
//   c, 通过key查找value   例：字典、 统计次数
void TestMap()
{
	map<string, string> m;
	// 向map中插入元素的方式：
	// 将键值对<"peach","桃子">插入map中，用pair直接来构造键值对
	m.insert(pair<string, string>("peach", "桃子"));
	// 将键值对<"peach","桃子">插入map中，用make_pair函数来构造键值对
	m.insert(make_pair("banan", "香蕉"));

	// 借用operator[]向map中插入元素
	/*
	operator[]的原理是：
	用<key, T()>构造一个键值对，然后调用insert()函数将该键值对插入到map中
	如果key已经存在，插入失败，insert函数返回该key所在位置的迭代器
	如果key不存在，插入成功，insert函数返回新插入元素所在位置的迭代器
	operator[]函数最后将insert返回值键值对中的value返回
	*/
	// 将<"apple", "">插入map中，插入成功，返回value的引用，将“苹果”赋值给该引用结果，
	m["apple"] = "苹果";
	//m.at("waterme") = "水蜜桃";   key不存在时抛异常

	cout << m.size() << endl;
	// 用迭代器去遍历map中的元素，可以得到一个按照key排序的序列
	for (auto& e : m)
		cout << e.first << "--->" << e.second << endl;
	cout << endl;

	// map中的键值对key一定是唯一的，如果key存在将插入失败
	auto ret = m.insert(make_pair("peach", "桃子"));
	//pair<map<string, string>::iterator, bool> ret = m.insert(make_pair("peach", "桃子"));
	if (ret.second)
		cout << "<peach, 桃色>不在map中, 已经插入" << endl;
	else
		cout << "键值为peach的元素已经存在：" << ret.first->first << "--->" <<
		ret.first->second << " 插入失败" << endl;

	// 删除key为"apple"的元素
	m.erase("apple");
	if (1 == m.count("apple"))
		cout << "apple还在" << endl;
	else
		cout << "apple被吃了" << endl;
}

//统计次数
void Test1()
{
	map<string, int> countMap;
	string str[] = { "sort", "sort", "insert", "map", "erase", "key", "map" };
	//for (const auto& s : str)
	//{
	//	auto& ret = countMap.find(s);
	//	if (ret == countMap.end())
	//	{
	//		countMap.insert(make_pair(s, 1));
	//		//countMap.insert(pair<string, int>(s, 1));
	//	}
	//	else
	//	{
	//		ret->second++;
	//	}
	//}
	for (auto& s : str)
	{
		countMap[s]++;
	}

	for (const auto& e : countMap)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

void Test2()
{
	map<string, string> dict;
	dict.insert(make_pair("sort", "排序"));
	dict.insert(make_pair("right", "右边"));
	dict["left"] = "左边"; //插入+修改
	dict["left"] = "剩余"; //修改

	for (const auto& e : dict)
	{
		cout << e.first << ": " << e.second << endl;
	}
}

int main()
{
	//TestSet();
	TestMap();
	//Test1();
	//Test2();
	system("pause");
	return 0;
}