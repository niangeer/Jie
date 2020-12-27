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

//Ŀ¼
void Menu();

//��ʼ��ͨѶ¼
void InitContact(contact_t *ct);

//�����ϵ�˵���Ϣ
void AddContact(contact_t *ct);

//չʾ�������ϵ����Ϣ
void ShowContact(const contact_t *ct);

//ɾ����ϵ�˵���Ϣ
void DelContact(contact_t *ct);

//������ϵ�˵���Ϣ
void SearchContact(const contact_t *ct);

//�޸���ϵ�˵���Ϣ
void ModContact(contact_t *ct);

//���ͨѶ¼
void ClearContact(contact_t *ct);

//����������ͨѶ¼
void SortContact(contact_t *ct);

#endif