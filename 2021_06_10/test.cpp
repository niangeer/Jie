//��Ŀ����ǰ��������������У�����һ�ö�����
//
//��Ŀ����������һ������ǰ�������������������������
//
//ע�� :����Լ�������û���ظ���Ԫ�ء�
//
//ʾ����
//���룺
//ǰ����� preorder = [3, 9, 20, 15, 7]
//������� inorder = [9, 3, 15, 20, 7]
//
//������������µĶ�������
//
//     3
//    / \
//   9  20
//     / \
//   15   7


#include <iostream>
#include <vector>
using namespace std;

 struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, \
		int& previ, int begin, int end)
	{
		if (previ == preorder.size())
			return nullptr;

		//�������䲻����
		if (begin > end)
			return nullptr;

		//ȷ���������������е�λ�ã��ָ����������������������������
		int rooti = begin;
		while (begin <= end)
		{
			if (preorder[previ] == inorder[rooti])
				break;

			rooti++;
		}
		TreeNode* root = new TreeNode(preorder[previ]);
		previ++;

		//[begin, rooti - 1] rooti [rooti + 1, end]
		root->left = _buildTree(preorder, inorder, previ, begin, rooti - 1);
		root->right = _buildTree(preorder, inorder, previ, rooti + 1, end);

		return root;
	}
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		int previ = 0;
		return _buildTree(preorder, inorder, previ, 0, inorder.size() - 1);
	}
};
