#include "contact.h"

void Menu()                             //Ŀ¼
{
	printf("##################################\n");
	printf("####1.Add    2.Del    3.Search####\n");
	printf("####4.Mod    5.Show   6.Clear ####\n");
	printf("####7.Sort            0.Exit  ####\n");
	printf("##################################\n");
	printf("Please Select# ");
}

void InitContact(contact_t *ct)          //��ʼ��ͨѶ¼
{
	memset(ct->persons, 0, sizeof(ct->persons));
	ct->size = 0;
}

void AddContact(contact_t *ct)           //�����ϵ�˵���Ϣ
{
	if (MAX == ct->size)
	{
		printf("ͨѶ¼���������ʧ�ܣ�\n");
	}
	else
	{
		printf("����# ");
		scanf("%s", ct->persons[ct->size].name);
		printf("����# ");
		scanf("%d", &(ct->persons[ct->size].age));
		printf("�Ա�# ");
		scanf("%s", ct->persons[ct->size].sex);
		printf("�绰# ");
		scanf("%s", ct->persons[ct->size].telphone);
		printf("��ַ# ");
		scanf("%s", ct->persons[ct->size].address);
		ct->size += 1;
		printf("��ӳɹ�!\n");
	}
}

void ShowContact(const contact_t *ct)           //չʾ�������ϵ����Ϣ
{
	printf("����������������������������������������������������������������������������������\n");
	printf("|%-10s\t|%-10s\t|%-10s\t|%-10s\t|%-10s\t|\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("����������������������������������������������������������������������������������\n");
	for (int i = 0; i < ct->size; i++)
	{
		const person_t *p = &(ct->persons[i]);
		printf("|%-10s\t|%-10d\t|%-10s\t|%-10s\t|%-10s\t|\n", p->name,p->age,p->sex,p->telphone,p->address);
		printf("����������������������������������������������������������������������������������\n");
	}
}

static int Find(const contact_t *ct)
{
	char name[NUM / 4];
	printf("����������# ");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ct->size; i++)
	{
		if (strcmp(name, ct->persons[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(contact_t *ct)           //ɾ����ϵ�˵���Ϣ
{
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����!\n");
	}
	else
	{
		for (int j = pos; j < ct->size-1; j++)
		{
			ct->persons[j] = ct->persons[j + 1];
		}
		ct->size -= 1;
		printf("ɾ���ɹ�!\n");
	}
}

void SearchContact(const contact_t *ct)         //������ϵ�˵���Ϣ
{
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����!\n");
	}
	else
	{
		const person_t *p = &(ct->persons[pos]);
		printf("����������������������������������������������������������������������������������\n");
		printf("|%-10s\t|%-10s\t|%-10s\t|%-10s\t|%-10s\t|\n","����","����","�Ա�","�绰","��ַ");
		printf("����������������������������������������������������������������������������������\n");
		printf("|%-10s\t|%-10d\t|%-10s\t|%-10s\t|%-10s\t|\n", p->name,p->age,p->sex,p->telphone,p->address);
		printf("����������������������������������������������������������������������������������\n");
	}
}

void ModContact(contact_t *ct)           //�޸���ϵ�˵���Ϣ
{
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("Ҫ�޸���Ϣ���˲�����!\n");
	}
	else
	{
		person_t *p = &(ct->persons[pos]);
		printf("������Ҫ�޸ĵ�����# ");
		scanf("%s", p->name);
		printf("������Ҫ�޸ĵ�����# ");
		scanf("%d", &(p->age));
		printf("������Ҫ�޸ĵ��Ա�# ");
		scanf("%s", p->sex);
		printf("������Ҫ�޸ĵĵ绰# ");
		scanf("%s", p->telphone);
		printf("������Ҫ�޸ĵĵ�ַ# ");
		scanf("%s", p->address);
		printf("�޸ĳɹ�!\n");
		printf("����������������������������������������������������������������������������������\n");
		printf("|%-10s\t|%-10s\t|%-10s\t|%-10s\t|%-10s\t|\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("����������������������������������������������������������������������������������\n");
		printf("|%-10s\t|%-10d\t|%-10s\t|%-10s\t|%-10s\t|\n", p->name,p->age,p->sex,p->telphone,p->address);
		printf("����������������������������������������������������������������������������������\n");
	}
}

void ClearContact(contact_t *ct)         //���ͨѶ¼
{
	ct->size = 0;
	printf("����ɹ�!\n");
}

void SortContact(contact_t *ct)          //����������ͨѶ¼
{
	for (int i = 0; i < ct->size; i++)
	{
		int flag = 1;
		for (int j = 0; j < ct->size - 1 - i; j++)
		{
			if (strcmp(ct->persons[j].name, ct->persons[j + 1].name) >0)
			{
				flag = 0;
				person_t p = ct->persons[j];
				ct->persons[j] = ct->persons[j + 1];
				ct->persons[j + 1] = p;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
	printf("����ɹ�!\n");
}