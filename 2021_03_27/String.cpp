#include "String.h"

//[]操作符重载
char& jzh::string ::operator[](size_t i)
{
	assert(i < _size);
	return _str[i];
}

//获取_size的数值
size_t jzh::string::size()
{
	return _size;
}

//获取_capacity的数值
size_t jzh::string::capacity()
{
	return _capacity;
}

//以C语言的方式输出
const char* jzh::string::c_str()
{
	return _str;
}

//预留n个空间
void jzh::string::reserve(size_t n)
{
	if (n > _capacity)
	{
		char* tmp = new char[n + 1];
		strcpy(tmp, _str);

		delete[] _str;
		_str = tmp;
		_capacity = n;
	}
}

//字符尾插
void jzh::string::push_back(char ch)
{
	if (_size >= _capacity)
	{
		reserve(_capacity * 2);
	}
	_str[_size++] = ch;
	_str[_size] = '\0';
}

//字符串尾插
void jzh::string::append(const char* s)
{
	size_t len = strlen(s);
	if (_size + len > _capacity)
	{
		reserve(_size + len);
	}
	strcpy(_str + _size, s);
	_size += len;
}

