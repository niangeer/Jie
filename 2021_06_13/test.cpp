#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

//keyģ��: set  multiset(�ɲ����ظ���ֵ)
//1������+ȥ��
//2�������ڲ��ڣ�key�����޸ģ�
//3��set.find()ΪO(logN), �㷨�е�find()ΪO(N)
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

//   key / value������ģ�� -�� map
//   a, �����ڲ���
//   b, ����+ȥ��
//   c, ͨ��key����value   �����ֵ䡢 ͳ�ƴ���
void TestMap()
{
	map<string, string> m;
	// ��map�в���Ԫ�صķ�ʽ��
	// ����ֵ��<"peach","����">����map�У���pairֱ���������ֵ��
	m.insert(pair<string, string>("peach", "����"));
	// ����ֵ��<"peach","����">����map�У���make_pair�����������ֵ��
	m.insert(make_pair("banan", "�㽶"));

	// ����operator[]��map�в���Ԫ��
	/*
	operator[]��ԭ���ǣ�
	��<key, T()>����һ����ֵ�ԣ�Ȼ�����insert()�������ü�ֵ�Բ��뵽map��
	���key�Ѿ����ڣ�����ʧ�ܣ�insert�������ظ�key����λ�õĵ�����
	���key�����ڣ�����ɹ���insert���������²���Ԫ������λ�õĵ�����
	operator[]�������insert����ֵ��ֵ���е�value����
	*/
	// ��<"apple", "">����map�У�����ɹ�������value�����ã�����ƻ������ֵ�������ý����
	m["apple"] = "ƻ��";
	//m.at("waterme") = "ˮ����";   key������ʱ���쳣

	cout << m.size() << endl;
	// �õ�����ȥ����map�е�Ԫ�أ����Եõ�һ������key���������
	for (auto& e : m)
		cout << e.first << "--->" << e.second << endl;
	cout << endl;

	// map�еļ�ֵ��keyһ����Ψһ�ģ����key���ڽ�����ʧ��
	auto ret = m.insert(make_pair("peach", "����"));
	//pair<map<string, string>::iterator, bool> ret = m.insert(make_pair("peach", "����"));
	if (ret.second)
		cout << "<peach, ��ɫ>����map��, �Ѿ�����" << endl;
	else
		cout << "��ֵΪpeach��Ԫ���Ѿ����ڣ�" << ret.first->first << "--->" <<
		ret.first->second << " ����ʧ��" << endl;

	// ɾ��keyΪ"apple"��Ԫ��
	m.erase("apple");
	if (1 == m.count("apple"))
		cout << "apple����" << endl;
	else
		cout << "apple������" << endl;
}

//ͳ�ƴ���
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
	dict.insert(make_pair("sort", "����"));
	dict.insert(make_pair("right", "�ұ�"));
	dict["left"] = "���"; //����+�޸�
	dict["left"] = "ʣ��"; //�޸�

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