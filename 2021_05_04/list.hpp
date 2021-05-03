#include <iostream>
#include <assert.h>
using namespace std;

namespace jzh
{
	//节点，存储数据
	template<class T>
	struct __list_node
	{
		T _data;
		__list_node<T>* _next; //标准库为void*,后面使用时进行强转
		__list_node<T>* _prev; //标准库为void*,后面使用时进行强转

		__list_node(const T& data = T())
			:_data(data)
			, _next(nullptr)
			, _prev(nullptr)
		{}
	};

	//迭代器
	template<class T, class Ref, class Ptr> //类设计的复用
	//__list_iterator<T, T&, T*>  : iterator 
	//__list_iterator<T, const& T, const T> : const_iterator 
	struct __list_iterator
	{
		typedef __list_iterator<T, Ref, Ptr> self;
		typedef __list_node<T>* link_type;

		link_type _node;

		__list_iterator(link_type node = nullptr)
			:_node(node)
		{}

		//这里不涉及深拷贝，拷贝构造、赋值、析构可用系统自动生成的
		__list_iterator(const self& x)
			:_node(x._node)
		{}

		bool operator==(const self& x)const
		{
			return _node == x._node;
		}
		bool operator!=(const self& x)const
		{
			return _node != x._node;
		}

		//Ref : T& 或 const T&
		Ref operator*()const
		{
			return _node->_data;
		}

		//Ptr : T* 或 const T*
		Ptr operator->()const
		{
			return &(operator*());
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		self operator--(int)
		{
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}
	};

	//链表结构
	template<class T>
	class list
	{
		typedef __list_node<T> list_node;
	public:
		typedef list_node* link_type;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		//Constructor
		list()
		{
			CreateHead();
		}
		
		list(int n, const T& data = T())
		{
			CreateHead();
			for (int i = 0; i < n; i++)
			{
				push_back(data);
			}
		}

		template<class InputIterator>
		list(InputIterator first, InputIterator last)
		{
			CreateHead();

			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}

		list(const list<T>& lt)
		{
			CreateHead();
			list<T> tmp(lt.begin(), lt.end());
			swap(tmp);
		}

		list<T>& operator=(const list<T>& lt)
		{
			if (this != &lt)
			{
				list<T> tmp(lt.begin(), lt.end());
				swap(tmp);
			}
			return *this;
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		//iterator
		iterator begin()
		{
			//源码为 return _head->_next;
			//单参数构造函数会自动隐式类型转化为return iterator(_head->_next);
			return iterator(_head->_next);
		}
		iterator end()
		{
			return iterator(_head);
		}
		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}
		const_iterator end() const
		{
			return const_iterator(_head);
		}

		//Capacity
		bool empty() const
		{
			return _head == _head->_next;
		}

		size_t size() const
		{
			size_t count = 0;
			const_iterator it = begin();
			while (it != end())
			{
				count++;
				it++;
			}
			return count;
		}

		//Access
		T& front() { return *begin(); }
		const T& front() const { return *begin(); }
		T& back() { return *(--end()); }
		const T& back() const { return *(--end); }

		//Modifiers
		void push_back(const T& data) { insert(end(), data); }
		void pop_back() { erase(--end()); }
		void push_front(const T& data) { insert(begin(), data); }
		void pop_front() { erase(begin()); }

		iterator insert(iterator pos, const T& data)
		{
			link_type node = new list_node(data);
			link_type cur = pos._node;
			link_type prev = cur->_prev;

			prev->_next = node;
			node->_prev = prev;
			node->_next = cur;
			cur->_prev = node;

			return iterator(node);
		}

		iterator erase(iterator pos)
		{
			link_type cur = pos._node;
			link_type prev = cur->_prev;
			link_type next = cur->_next;

			prev->_next = next;
			next->_prev = prev;

			delete cur;

			return iterator(next);
		}


		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		void swap(list<T>& lt)
		{
			std::swap(_head, lt._head);
		}

	private:
		void CreateHead()
		{
			_head = new list_node;
			_head->_next = _head;
			_head->_prev = _head;
		}
	private:
		link_type _head;
	};
}