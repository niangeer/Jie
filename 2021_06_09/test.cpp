//��Ŀ��������������˫������
//
//��Ŀ����������һ�ö��������������ö���������ת����һ�������˫������
//
//ע�� :
//1.Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ�򡣵�ת������Ժ����нڵ����ָ����Ҫָ��ǰ�������нڵ����ָ����Ҫָ����
//2.���������еĵ�һ���ڵ��ָ��
//3.�������ص�TreeNode��������ָ�룬��ʵ���Կ���һ��˫����������ݽṹ

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