#ifndef _CONTACT_H_
#define _CONTACT_H_

#pragma warning(disable:4996)

#include <stdio.h>
#include <Windows.h>

#define MAX 128

typedef struct person
{
	char name[MAX / 4];
	int age;
	char sex;
	char telphone[MAX/4];
	char address[MAX];
}person_t;

//通讯录类型
typedef struct contact
{
	int size;          //记录当前已有的元素个数
	person_t persons[MAX];
}contact_t;

//目录
void Menu();

//初始化通讯录
void InitContact(contact_t* ct);

//添加联系人的信息
void Addperson(contact_t* ct);

//展示通讯录
void Show(contact_t *ct);

//删除联系人的信息
void Delperson(contact_t *ct);

//查找联系人的信息
void Search(contact_t *ct);


#endif