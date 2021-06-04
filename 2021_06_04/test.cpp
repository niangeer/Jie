#include "BSTree.h"

int main()
{
	BSTree<int> bt;
	bt.Insert(1);
	bt.Insert(5);
	bt.Insert(6);
	bt.Insert(4);
	bt.Insert(2);
	bt.Insert(1);
	bt.Insert(4);

	bt.InOrder();

	bt.Erase(1);
	bt.Erase(2);
	bt.InOrder();

	system("pause");
	return 0;
}