#include "BSTree.hpp"

int main()
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
		{
			cout << ret->_val << endl;
		}
	}
	system("pause"); 
	return 0;
}