#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <assert.h>

#pragma warning(disable:4996)

#define NUM 32
#define MAX 1
#define INC_SIZE 1

typedef struct person
{
	char name[NUM/2];
	char telphone[NUM];
}person_t;

typedef struct contact
{
	int cap;
	int size;
	person_t persons[0];
}contact_t;

//目录
void Menu();

//初始化通讯录
contact_t* InitContact();

//添加一个联系人信息
void AddPerson(contact_t** ct);

//展示联系人的信息
void ShowContact(contact_t* ct);

//删除一个联系人的信息
void DelPerson(contact_t* ct);

//查找联系人
void Search(contact_t* ct);

//修改联系人的信息
void ModPerson(contact_t* ct);

//清空通讯录
void ClearContact(contact_t* ct);

//按姓名排序通讯录
void SortContact(contact_t* ct);

//释放内存
void DestroyContact(contact_t* ct);

#endif 