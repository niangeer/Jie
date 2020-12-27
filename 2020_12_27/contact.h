#ifndef _CONTACT_H_
#define _CONTACT_H_

#pragma warning(disable:4996)

#define MAX 100
#define NUM 128

#include <stdio.h>
#include <Windows.h>
#include <assert.h>

typedef struct person
{
	char name[NUM / 4];
	int age;
	char sex[NUM / 8];
	char telphone[NUM / 4];
	char address[NUM];
}person_t;

typedef struct contact
{
	int size;
	person_t persons[MAX];
}contact_t;

//目录
void Menu();

//初始化通讯录
void InitContact(contact_t *ct);

//添加联系人的信息
void AddContact(contact_t *ct);

//展示已添加联系人信息
void ShowContact(const contact_t *ct);

//删除联系人的信息
void DelContact(contact_t *ct);

//查找联系人的信息
void SearchContact(const contact_t *ct);

//修改联系人的信息
void ModContact(contact_t *ct);

//清空通讯录
void ClearContact(contact_t *ct);

//按名字排序通讯录
void SortContact(contact_t *ct);

#endif