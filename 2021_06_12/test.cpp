//二叉树的后序遍历，非递归
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
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> v;
		TreeNode* cur = root;
		TreeNode* prev = nullptr;
		stack<TreeNode*> st;

		while (cur || !st.empty())
		{
			//1，保存左路节点入栈
			while (cur)
			{
				st.push(cur);
				cur = cur->left;
			}
			//2，对于root这棵树。剩下的是左路节点和左路节点右子树没有访问
			//依次从栈里面拿出来访问
			TreeNode* top = st.top();

			//如果右为空，或者右孩子等于上一个访问的节点，那么说明右树都已经访问过了
			//取出当前节点访问
			if (top->right == nullptr || top->right == prev)
			{
				v.push_back(top->val);
				prev = top;
				st.pop();
			}
			else
			{
				//子问题走右树
				cur = top->right;
			}
		}
		return v;
	}
};