#ifndef _STRING_H_
#define _STRING_H_

#include <iostream>
#include <string>
#include <assert.h>

#pragma warning(disable:4996)

using namespace std;

namespace jzh
{
	class string
	{
	public:
		//���캯��
		string(const char* s = "")
		{
			if (nullptr == s)
				s = "";

			_size = _capacity = strlen(s);
			_str = new char[_capacity + 1];
			strcpy(_str, s);
		}
		//�������캯��
		string(const string& str)
			:_str(nullptr)
		{
			string tmp(str._str);
			swap(tmp);
		}
		//��������
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		//��ֵ���������
		string& operator=(const string& str)
		{
			if (this != &str)
			{
				_str = nullptr;

				string tmp(str._str);
				swap(tmp);
			}
			return *this;
		}

		//������(iterator)
		typedef char* iterator;
		iterator begin();
		iterator end();
		
		typedef const char* const_iterator;
		const_iterator begin()const;
		const_iterator end()const;

		//����(capacity)
		size_t size()const;
		size_t capacity()const;
		void resize(size_t pos, char ch = '\0');
		void reserve(size_t n);
		void clear();
		bool empty()const;

		//Ԫ�ط���(element access)
		char& operator[](size_t pos);
		const char& operator[](size_t pos)const;

		//�޸Ĳ���(modify)
		void push_back(char ch);
		void append(const char* s);
		string& insert(size_t pos, char ch);
		string& insert(size_t pos, const char* s);
		string& operator+=(char ch);
		string& operator+=(const char* s);
		string& operator+=(const string& str);
		string& erase(size_t pos = 0, size_t len = npos);
		void swap(string& str);


		const char* c_str()const
		{
			return _str;
		}
	private:
		size_t _size;
		size_t _capacity;
		char* _str;
	public:
		static const size_t npos;
	};
}

#endif