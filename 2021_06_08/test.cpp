//��Ŀ���������Ĺ�������
//
//����һ��������, �ҵ�����������ָ���ڵ������������ȡ�
//
//�ٶȰٿ�������������ȵĶ���Ϊ��
//�������и��� T �������ڵ� p��q������������ȱ�ʾΪһ���ڵ� x��
// ���� x �� p��q �������� x ����Ⱦ����ܴ�һ���ڵ�Ҳ���������Լ������ȣ�����
//
// ʾ����
// ���룺root = [3, 5, 1, 6, 2, 0, 8, null, null, 7, 4], p = 5, q = 1
// �����3
// ���ͣ��ڵ� 5 �ͽڵ� 1 ��������������ǽڵ� 3 ��

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
	//�������ҳ�����x��·��
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

		//root��root������root��������û��x�ڵ�
		//˵��root���ڸ�·���У����Ե���
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
