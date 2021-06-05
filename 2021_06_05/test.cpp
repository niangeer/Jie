#include "BSTree.hpp"

int main()
{
	BSTree<string, string> dict;
	dict.Insert("string", "×Ö·û´®");
	dict.Insert("sort", "ÅÅÐò");
	dict.Insert("insert", "²åÈë");
	dict.Insert("left", "×ó");
	dict.Insert("right", "ÓÒ");
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