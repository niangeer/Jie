//题目：二叉树的公共祖先
//
//给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
//
//百度百科中最近公共祖先的定义为：
//“对于有根树 T 的两个节点 p、q，最近公共祖先表示为一个节点 x，
// 满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
//
// 示例：
// 输入：root = [3, 5, 1, 6, 2, 0, 8, null, null, 7, 4], p = 5, q = 1
// 输出：3
// 解释：节点 5 和节点 1 的最近公共祖先是节点 3 。

#include <iostream>
#include <stack>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	//在树中找出根到x的路径
	bool TreePath(TreeNode* root, TreeNode* x, stack<TreeNode*>& st)
	{
		if (root == nullptr)
			return false;

		st.push(root);
		if (root == x)
			return true;

		if (TreePath(root->left, x, st))
			return true;
		if (TreePath(root->right, x, st))
			return true;

		//root，root左树，root右树，都没有x节点
		//说明root不在该路径中，所以弹出
		st.pop();
		return false;
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == nullptr)
			return nullptr;

		stack<TreeNode*> pPath;
		stack<TreeNode*> qPath;

		TreePath(root, p, pPath);
		TreePath(root, q, qPath);

		while (pPath.size() > qPath.size())
		{
			pPath.pop();
		}
		while (pPath.size() < qPath.size())
		{
			qPath.pop();
		}

		while (pPath.top() != qPath.top())
		{
			pPath.pop();
			qPath.pop();
		}

		return pPath.top();
	}
};
