#include "contact.h"

void Menu()
{
	printf("##################################\n");
	printf("####1.Add    2.Del    3.Search####\n");
	printf("####4.Mod    5.Show   6.Clear ####\n");
	printf("####7.Sort   8.Save   0.Exit  ####\n");
	printf("##################################\n");
	printf("Please Select# ");
}

contact_t* InitContact()
{
	int size = sizeof(contact_t)+sizeof(person_t)*MAX;
	contact_t* ct = (contact_t*)malloc(size);
	if (NULL == ct)
	{
		printf("malloc error!\n");
		exit(1);
	}
	ct->cap = MAX;
	ct->size = 0;
	return ct;
}

static int IsFull(contact_t *ct)
{
	assert(ct);
	return (ct)->size == (ct)->cap;
}

static int Inc(contact_t **ct)
{
	printf("contact is Full,inc ing...\n");
	contact_t *p = (contact_t*)realloc(*ct, sizeof(contact_t) + ((*ct)->cap + INC_SIZE)*sizeof(person_t));
	if (NULL == p)
	{
		return 0;
	}
	*ct = p;
	(*ct)->cap += INC_SIZE;
	printf("contact is Full,inc done...\n");
	return 1;
}

void AddPerson(contact_t** ct)
{
	assert(ct);
	if (!IsFull(*ct) || Inc(ct))
	{
		printf("姓名# ");
		scanf("%s", (*ct)->persons[(*ct)->size].name);
		printf("电话# ");
		scanf("%s", (*ct)->persons[(*ct)->size].telphone);
		(*ct)->size += 1;
		printf("添加成功!\n");
	}
	else
	{
		printf("添加失败!\n");
	}
}

void ShowContact(contact_t* ct)
{
	assert(ct);
	printf("————————————————-\n");
	printf("|%-10s\t|%-10s\t|\n", "姓名", "电话");
	printf("————————————————-\n");
	for (int i = 0; i < ct->size; i++)
	{
		printf("|%-10s\t|%-10s\t|\n", ct->persons[i].name, ct->persons[i].telphone);
		printf("————————————————-\n");
	}
}

static int Find(contact_t* ct)
{
	assert(ct);
	char name[NUM / 2];
	printf("请输入姓名# ");
	scanf("%s", name);
	for (int i = 0; i < ct->size; i++)
	{
		if (strcmp(name, ct->persons[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelPerson(contact_t* ct)
{
	assert(ct);
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("要删除的联系人不存在!\n");
	}
	else
	{
		for (int i = pos; i < ct->size - 1; i++)
		{
			ct->persons[i] = ct->persons[i + 1];
		}
		ct->size -= 1;
		printf("删除成功!\n");
	}
}

void Search(contact_t* ct)
{
	assert(ct);
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("要查找的联系人不存在!\n");
	}
	else
	{
		printf("————————————————-\n");
		printf("|%-10s\t|%-10s\t|\n", "姓名", "电话");
		printf("————————————————-\n");
		printf("|%-10s\t|%-10s\t|\n", ct->persons[pos].name, ct->persons[pos].telphone);
		printf("————————————————-\n");
	}
}

void ModPerson(contact_t* ct)
{
	assert(ct);
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("要修改信息的人不存在!\n");
	}
	else
	{
		printf("姓名# ");
		scanf("%s", ct->persons[pos].name);
		printf("电话# ");
		scanf("%s", ct->persons[pos].telphone);
		printf("修改成功!\n");
	}
}

void ClearContact(contact_t* ct)
{
	assert(ct);
	ct->size = 0;
	printf("清空成功!\n");
}

void SortContact(contact_t* ct)
{
	assert(ct);
	for (int i = 0; i < ct->size; i++)
	{
		int flag = 1;
		for (int j = 0; j < ct->size - 1 - i; j++)
		{
			if (strcmp(ct->persons[j].name, ct->persons[j + 1].name)>0)
			{
				person_t p = ct->persons[j];
				ct->persons[j] = ct->persons[j + 1];
				ct->persons[j + 1] = p;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
	printf("排序成功!\n");
}

void DestroyContact(contact_t* ct)
{
	free(ct);
	ct = NULL;
}