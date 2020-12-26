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

//ͨѶ¼����
typedef struct contact
{
	int size;          //��¼��ǰ���е�Ԫ�ظ���
	person_t persons[MAX];
}contact_t;

//Ŀ¼
void Menu();

//��ʼ��ͨѶ¼
void InitContact(contact_t* ct);

//�����ϵ�˵���Ϣ
void Addperson(contact_t* ct);

//չʾͨѶ¼
void Show(contact_t *ct);

//ɾ����ϵ�˵���Ϣ
void Delperson(contact_t *ct);

//������ϵ�˵���Ϣ
void Search(contact_t *ct);


#endif