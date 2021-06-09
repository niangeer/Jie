//题目：二叉搜索树与双向链表
//
//题目描述：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表
//
//注意 :
//1.要求不能创建任何新的结点，只能调整树中结点指针的指向。当转化完成以后，树中节点的左指针需要指向前驱，树中节点的右指针需要指向后继
//2.返回链表中的第一个节点的指针
//3.函数返回的TreeNode，有左右指针，其实可以看成一个双向链表的数据结构

#include <iostream>
using namespace std;
struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL)
	{}
};

class Solution {
public:
	void _Convert(TreeNode* root, TreeNode*& prev)
	{
		if (root == nullptr)
			return;

		_Convert(root->left, prev);
		root->left = prev;
		if (prev)
			prev->right = root;
		prev = root;

		_Convert(root->right, prev);
	}
	TreeNode* Convert(TreeNode* pRootOfTree) {
		if (pRootOfTree == nullptr)
			return nullptr;

		TreeNode* prev = nullptr;
		_Convert(pRootOfTree, prev);

		TreeNode* head = pRootOfTree;
		while (head->left)
		{
			head = head->left;
		}
		return head;
	}
};