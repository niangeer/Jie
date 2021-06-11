//非递归二叉树前序遍历

#include <iostream>
#include <vector>
#include <stack>
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
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> v;
		TreeNode* cur = root;
		stack<TreeNode*> st;

		//cur不为空，表示还有树没有开始访问
		//st不为空，表示还有节点的右子树没有访问
		while (cur || !st.empty())
		{
			//1，访问并将左路节点入栈
			while (cur)
			{
				st.push(cur);
				v.push_back(cur->val);
				cur = cur->left;
			}

			//2，对于root这棵树，剩下的是左路节点的右子树没有访问
			//依次从栈里面拿出来访问
			TreeNode* top = st.top();
			st.pop();

			//子问题：走右树
			cur = top->right;
		}
		return v;
	}
};
