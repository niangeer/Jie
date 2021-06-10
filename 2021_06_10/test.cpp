//题目：用前序与中序遍历序列，构造一棵二叉树
//
//题目描述：根据一棵树的前序遍历与中序遍历构造二叉树。
//
//注意 :你可以假设树中没有重复的元素。
//
//示例：
//输入：
//前序遍历 preorder = [3, 9, 20, 15, 7]
//中序遍历 inorder = [9, 3, 15, 20, 7]
//
//输出：返回如下的二叉树：
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

		//中序区间不存在
		if (begin > end)
			return nullptr;

		//确定根在中序区间中的位置，分割出左子树的中序与右子树的中序
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
