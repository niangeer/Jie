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

//Ŀ¼
void Menu();

//��ʼ��ͨѶ¼
contact_t* InitContact();

//����һ����ϵ����Ϣ
void AddPerson(contact_t** ct);

//չʾ��ϵ�˵���Ϣ
void ShowContact(contact_t* ct);

//ɾ��һ����ϵ�˵���Ϣ
void DelPerson(contact_t* ct);

//������ϵ��
void Search(contact_t* ct);

//�޸���ϵ�˵���Ϣ
void ModPerson(contact_t* ct);

//���ͨѶ¼
void ClearContact(contact_t* ct);

//����������ͨѶ¼
void SortContact(contact_t* ct);

//�ͷ��ڴ�
void DestroyContact(contact_t* ct);

#endif 