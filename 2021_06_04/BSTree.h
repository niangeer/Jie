#include <iostream>
using namespace std;

template <class K>
struct BSTreeNode
{
	K _key;
	BSTreeNode<K>* _left;
	BSTreeNode<K>* _right;

	BSTreeNode(const K& key = K())
		:_key(key)
		, _left(nullptr)
		, _right(nullptr)
	{}
};

template<class K>
class BSTree
{
	typedef BSTreeNode<K> Node;
public:
	bool Insert(const K& key)
	{
		//����
		if (_root == nullptr)
		{
			_root = new Node(key);
			return true;
		}

		//�ǿ�ʱ�ҵ�����λ��
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}
		Node* newNode = new Node(key);
		if (key > parent->_key)  //���ڲ����Ҳ�
			parent->_right = newNode;
		else                     //С�ڲ������
			parent->_left = newNode;

		return true;
	}

	const Node* Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
				cur = cur->_right;
			else if (key < cur->_key)
				cur = cur->_left;
			else
				return cur;
		}
		return nullptr;
	}

	bool Erase(const K& key)
	{
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//׼��ɾ��
				//1����Ϊ��
				if (nullptr == cur->_left)
				{
					//���������curΪ������parentΪnullptr
					if (cur == _root)
						_root = _root->_right;
					else if (parent->_left == cur)
						parent->_left = cur->_right;
					else
						parent->_right = cur->_right;

					delete cur;
				}
				//2����Ϊ��
				else if (nullptr == cur->_right)
				{
					if (cur == _root)
						_root = _root->_left;
					else if (parent->_left == cur)
						parent->_left = cur->_left;
					else
						parent->_right = cur->_left;

					delete cur;
				}
				//3,���Ҷ���Ϊ��
				else
				{
					//�����ɾ��
					//������������С�ڵ㣨����ڵ㣩�����������������ڵ㣨���ҽڵ㣩
					Node* subMin = cur->_right;
					//�����������������������������С�ڵ㣬��smParent������Ϊ�գ���Ҫ����cur
					Node* smParent = cur;
					while (subMin->_left)
					{
						smParent = subMin;
						subMin = subMin->_left;
					}
					cur->_key = subMin->_key;

					if (smParent->_left == subMin)
						smParent->_left = subMin->_right;
					else  //���������cur������С�ڵ㣬��ʱsmParent->right == subMin
						smParent->_right = subMin->_right;

					delete subMin;
				}
				return true;
			}
		}
		return false;
	}

	void _InOrder(Node* root)
	{
		if (nullptr == root)
			return;
		
		_InOrder(root->_left);
		cout << root->_key << " ";
		_InOrder(root->_right);
	}
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}
private:
	Node* _root = nullptr;
};