#ifndef _STRING_H_
#define _STRING_H_

#include <iostream>
#include <assert.h>
#include <string>

#pragma warning(disable:4996)

using namespace std;

namespace jzh
{
	class string
	{
	public:
		//迭代器
		typedef char* iterator;
		//迭代器开头
		iterator begin()
		{
			return _str;
		}
		//迭代器结尾
		iterator end()
		{
			return _str + _size;
		}

		//构造函数
		string(const char* s = "")
		{
			if (nullptr == s)
			{
				s = "";
			}
			_size = strlen(s);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, s);
		}

		//拷贝构造函数
		string(const string& str)
		{
			_size = _capacity = str._size;
			_str = new char[_capacity + 1];
			strcpy(_str, str._str);
		}

		//析构函数
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		//赋值运算符重载
		string& operator=(const string& str)
		{
			if (this != &str)
			{
				delete[] _str;

				_size = strlen(str._str);
				_capacity = _size;
				_str = new char[_capacity + 1];
				strcpy(_str, str._str);
			}
		}

		// []运算符重载
		char& operator[](size_t i);

		//获取_size的值
		size_t size();

		//获取_capacity的值
		size_t capacity();

		//以C语言的方式输出
		const char* c_str();

		//预留n个空间
		void reserve(size_t n);
		
		//字符尾插
		void push_back(char ch);

		//字符串尾插
		void append(const char* s);

	private:
		size_t _size;
		size_t _capacity; //能存多少个有效字符的空间
		char* _str;
	};
}

#endif