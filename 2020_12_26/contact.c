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
	ct->size = 0;     //设置通讯录最初只有0个元素
}

void Addperson(contact_t* ct)
{
	if (ct->size == MAX)
	{
		printf("通讯录已满，无法添加!\n");
	}
	else
	{
		printf("姓名# ");
		scanf(" %s", ct->persons[ct->size].name);
		printf("年龄# ");
		scanf(" %d", &(ct->persons[ct->size].age));
		printf("性别# ");
		scanf(" %c", &(ct->persons[ct->size].sex));
		printf("电话# ");
		scanf(" %s", ct->persons[ct->size].telphone);
		printf("地址# ");
		scanf(" %s", ct->persons[ct->size].address);
		ct->size += 1;
	}
}

void Show(contact_t *ct)
{
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	return -1;          //不存在的情况
}

void Delperson(contact_t *ct)
{
	char name[MAX / 4];
	printf("请输入要查找的姓名# ");
	scanf("%s", name);
	int pos = Find(ct, name);
	if (-1 == pos)
	{
		printf("要删除的人不存在!\n");
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

void Search(contact_t *ct)
{
	char name[MAX / 4];
	printf("请输入要查找的姓名# ");
	scanf("%s", name);
	int pos = Find(ct, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在!\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-10d\t%-10c\t%-10s\t%-10s\n", ct->persons[pos].name, \
			ct->persons[pos].age, ct->persons[pos].sex, \
			ct->persons[pos].telphone, ct->persons[pos].address);
	}
}

