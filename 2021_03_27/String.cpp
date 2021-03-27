#include "String.h"

//[]����������
char& jzh::string ::operator[](size_t i)
{
	assert(i < _size);
	return _str[i];
}

//��ȡ_size����ֵ
size_t jzh::string::size()
{
	return _size;
}

//��ȡ_capacity����ֵ
size_t jzh::string::capacity()
{
	return _capacity;
}

//��C���Եķ�ʽ���
const char* jzh::string::c_str()
{
	return _str;
}

//Ԥ��n���ռ�
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

//�ַ�β��
void jzh::string::push_back(char ch)
{
	if (_size >= _capacity)
	{
		reserve(_capacity * 2);
	}
	_str[_size++] = ch;
	_str[_size] = '\0';
}

//�ַ���β��
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

