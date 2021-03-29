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
				string tmp(str);
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
		void reserve(size_t n);
		void resize(size_t n, char ch = '\0');
		void clear();
		bool empty()const;

		//Ԫ�ط���(element access)
		char& operator[](size_t pos);
		const char& operator[](size_t pos)const;

		//�޸Ĳ���(modify)
		string& insert(size_t pos, char ch);
		string& insert(size_t pos, const char* s);
		void push_back(char ch);
		string& append(const char* s);
		string& operator+=(char ch);
		string& operator+=(const char* s);
		string& operator+=(const string& str);
		string& erase(size_t pos = 0, size_t len = npos);
		void swap(string& str);

		//�ַ���������String operations��
		const char* c_str()const;
		size_t find(char ch, size_t pos = 0)const;
		size_t find(const char* sub, size_t pos = 0)const;

	private:
		size_t _size;
		size_t _capacity;
		char* _str;
	public:
		static const size_t npos;
	};

	//�ǳ�Ա�������أ�Non-member function overloads��
	istream& operator>>(istream& in, string& str);
	ostream& operator<<(ostream& out, const string& str);
	string operator+(const string& str, char ch);
	string operator+(const string& str, const char* s);
	string operator+(const string& s1, const string& s2);

}

#endif