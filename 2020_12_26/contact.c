#include "contact.h"

void Menu()
{
	printf("##################################\n");
	printf("####1.Add    2.Del    3.Search####\n");
	printf("####4.Show            0.Exit  ####\n");
	printf("##################################\n");
	printf("Please Select# ");
}

void InitContact(contact_t* ct)
{
	memset(ct->persons, 0, sizeof(ct->persons));
	ct->size = 0;     //����ͨѶ¼���ֻ��0��Ԫ��
}

void Addperson(contact_t* ct)
{
	if (ct->size == MAX)
	{
		printf("ͨѶ¼�������޷����!\n");
	}
	else
	{
		printf("����# ");
		scanf(" %s", ct->persons[ct->size].name);
		printf("����# ");
		scanf(" %d", &(ct->persons[ct->size].age));
		printf("�Ա�# ");
		scanf(" %c", &(ct->persons[ct->size].sex));
		printf("�绰# ");
		scanf(" %s", ct->persons[ct->size].telphone);
		printf("��ַ# ");
		scanf(" %s", ct->persons[ct->size].address);
		ct->size += 1;
	}
}

void Show(contact_t *ct)
{
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (int i = 0; i < ct->size; i++)
	{
		printf("%-10s\t%-10d\t%-10c\t%-10s\t%-10s\n", ct->persons[i].name, \
			ct->persons[i].age, ct->persons[i].sex,\
			ct->persons[i].telphone, ct->persons[i].address);
	}
}

static int Find(contact_t *ct, char name[MAX / 4])
{
	int i = 0;
	for (i = 0; i < ct->size; i++)
	{
		if (0 == strcmp(ct->persons[i].name, name))
		{
			return i;
		}
	}
	return -1;          //�����ڵ����
}

void Delperson(contact_t *ct)
{
	char name[MAX / 4];
	printf("������Ҫ���ҵ�����# ");
	scanf("%s", name);
	int pos = Find(ct, name);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����!\n");
	}
	else
	{
		for (int i = pos; i < ct->size - 1; i++)
		{
			ct->persons[i] = ct->persons[i + 1];
		}
		ct->size -= 1;
		printf("ɾ���ɹ�!\n");
	}
}

void Search(contact_t *ct)
{
	char name[MAX / 4];
	printf("������Ҫ���ҵ�����# ");
	scanf("%s", name);
	int pos = Find(ct, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����!\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-10d\t%-10c\t%-10s\t%-10s\n", ct->persons[pos].name, \
			ct->persons[pos].age, ct->persons[pos].sex, \
			ct->persons[pos].telphone, ct->persons[pos].address);
	}
}

