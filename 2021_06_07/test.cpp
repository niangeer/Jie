//题目：二叉树的层数遍历
//
//题目描述：给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。
//
//示例：
//输入：[3, 9, 20, null, null, 15, 7],
//输出：[
//	    [3],
//		[9, 20],
//		[15, 7]
//      ]

#include <iostream>
#include <vector>
#include <queue>
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
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int> > vv;
		if (root == nullptr)
			return vv;

		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			int levelSize = q.size();//获取当前层数据个数

			//一层层出，并且把下一层的节点都入到队列
			//当前层出完以后，队列中存的就是下一层的所有节点
			vector<int> v;
			while (levelSize--)
			{
				v.push_back(q.front()->val);
				if (q.front()->left)
					q.push(q.front()->left);
				if (q.front()->right)
					q.push(q.front()->right);

				q.pop();
			}
			vv.push_back(v);
		}
		return vv;
	}
};
