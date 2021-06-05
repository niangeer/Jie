#include "BSTree.hpp"
//1��key������ģ�� -�� set
//   a, �����ڲ���
//   b, ����+ȥ��
//2��key / value������ģ�� -�� map
//   a, �����ڲ���
//   b, ����+ȥ��
//   c, ͨ��key����value   �����ֵ䡢 ͳ�ƴ���

//�ֵ�
void Test1()
{
	BSTree<string, string> dict;
	dict.Insert("string", "�ַ���");
	dict.Insert("sort", "����");
	dict.Insert("insert", "����");
	dict.Insert("left", "��");
	dict.Insert("right", "��");
	dict.InOrder();

	string str;
	while (cin >> str)
	{
		BSTreeNode<string, string>* ret = dict.Find(str);
		if (ret)
			cout << ret->_val << endl;
		else
			cout << "û�д˵���" << endl;
	}
}

//ͳ�ƴ���
void Test2()
{
	BSTree<string, int> countTree;
	string strArr[] = { "ƻ��", "����", "����", "�㽶", "����", "â��", "�㽶", "����", "â��", "�㽶", "����", "����" };
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