#include "BSTree.hpp"
//1、key的搜索模型 -》 set
//   a, 查找在不在
//   b, 排序+去重
//2、key / value的搜索模型 -》 map
//   a, 查找在不在
//   b, 排序+去重
//   c, 通过key查找value   例：字典、 统计次数

//字典
void Test1()
{
	BSTree<string, string> dict;
	dict.Insert("string", "字符串");
	dict.Insert("sort", "排序");
	dict.Insert("insert", "插入");
	dict.Insert("left", "左");
	dict.Insert("right", "右");
	dict.InOrder();

	string str;
	while (cin >> str)
	{
		BSTreeNode<string, string>* ret = dict.Find(str);
		if (ret)
			cout << ret->_val << endl;
		else
			cout << "没有此单词" << endl;
	}
}

//统计次数
void Test2()
{
	BSTree<string, int> countTree;
	string strArr[] = { "苹果", "西瓜", "葡萄", "香蕉", "核桃", "芒果", "香蕉", "核桃", "芒果", "香蕉", "核桃", "核桃" };
	for (const auto& str : strArr)
	{
		auto ret = countTree.Find(str);
		if (ret == nullptr)
			countTree.Insert(str, 1);
		else
			ret->_val++;
	}
	countTree.InOrder();
}
int main()
{
	//Test1();
	Test2();
	system("pause"); 
	return 0;
}