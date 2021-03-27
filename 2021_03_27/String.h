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
		//������
		typedef char* iterator;
		//��������ͷ
		iterator begin()
		{
			return _str;
		}
		//��������β
		iterator end()
		{
			return _str + _size;
		}

		//���캯��
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

		//�������캯��
		string(const string& str)
		{
			_size = _capacity = str._size;
			_str = new char[_capacity + 1];
			strcpy(_str, str._str);
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
				delete[] _str;

				_size = strlen(str._str);
				_capacity = _size;
				_str = new char[_capacity + 1];
				strcpy(_str, str._str);
			}
		}

		// []���������
		char& operator[](size_t i);

		//��ȡ_size��ֵ
		size_t size();

		//��ȡ_capacity��ֵ
		size_t capacity();

		//��C���Եķ�ʽ���
		const char* c_str();

		//Ԥ��n���ռ�
		void reserve(size_t n);
		
		//�ַ�β��
		void push_back(char ch);

		//�ַ���β��
		void append(const char* s);

	private:
		size_t _size;
		size_t _capacity; //�ܴ���ٸ���Ч�ַ��Ŀռ�
		char* _str;
	};
}

#endif