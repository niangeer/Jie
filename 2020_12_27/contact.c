#include "contact.h"

void Menu()                             //目录
{
	printf("##################################\n");
	printf("####1.Add    2.Del    3.Search####\n");
	printf("####4.Mod    5.Show   6.Clear ####\n");
	printf("####7.Sort            0.Exit  ####\n");
	printf("##################################\n");
	printf("Please Select# ");
}

void InitContact(contact_t *ct)          //初始化通讯录
{
	memset(ct->persons, 0, sizeof(ct->persons));
	ct->size = 0;
}

void AddContact(contact_t *ct)           //添加联系人的信息
{
	if (MAX == ct->size)
	{
		printf("通讯录已满，添加失败！\n");
	}
	else
	{
		printf("姓名# ");
		scanf("%s", ct->persons[ct->size].name);
		printf("年龄# ");
		scanf("%d", &(ct->persons[ct->size].age));
		printf("性别# ");
		scanf("%s", ct->persons[ct->size].sex);
		printf("电话# ");
		scanf("%s", ct->persons[ct->size].telphone);
		printf("地址# ");
		scanf("%s", ct->persons[ct->size].address);
		ct->size += 1;
		printf("添加成功!\n");
	}
}

void ShowContact(const contact_t *ct)           //展示已添加联系人信息
{
	printf("—————————————————————————————————————————\n");
	printf("|%-10s\t|%-10s\t|%-10s\t|%-10s\t|%-10s\t|\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("—————————————————————————————————————————\n");
	for (int i = 0; i < ct->size; i++)
	{
		const person_t *p = &(ct->persons[i]);
		printf("|%-10s\t|%-10d\t|%-10s\t|%-10s\t|%-10s\t|\n", p->name,p->age,p->sex,p->telphone,p->address);
		printf("—————————————————————————————————————————\n");
	}
}

static int Find(const contact_t *ct)
{
	char name[NUM / 4];
	printf("请输入姓名# ");
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
void DelContact(contact_t *ct)           //删除联系人的信息
{
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("要删除的人不存在!\n");
	}
	else
	{
		for (int j = pos; j < ct->size-1; j++)
		{
			ct->persons[j] = ct->persons[j + 1];
		}
		ct->size -= 1;
		printf("删除成功!\n");
	}
}

void SearchContact(const contact_t *ct)         //查找联系人的信息
{
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("要查找的人不存在!\n");
	}
	else
	{
		const person_t *p = &(ct->persons[pos]);
		printf("—————————————————————————————————————————\n");
		printf("|%-10s\t|%-10s\t|%-10s\t|%-10s\t|%-10s\t|\n","姓名","年龄","性别","电话","地址");
		printf("—————————————————————————————————————————\n");
		printf("|%-10s\t|%-10d\t|%-10s\t|%-10s\t|%-10s\t|\n", p->name,p->age,p->sex,p->telphone,p->address);
		printf("—————————————————————————————————————————\n");
	}
}

void ModContact(contact_t *ct)           //修改联系人的信息
{
	int pos = Find(ct);
	if (-1 == pos)
	{
		printf("要修改信息的人不存在!\n");
	}
	else
	{
		person_t *p = &(ct->persons[pos]);
		printf("请输入要修改的姓名# ");
		scanf("%s", p->name);
		printf("请输入要修改的年龄# ");
		scanf("%d", &(p->age));
		printf("请输入要修改的性别# ");
		scanf("%s", p->sex);
		printf("请输入要修改的电话# ");
		scanf("%s", p->telphone);
		printf("请输入要修改的地址# ");
		scanf("%s", p->address);
		printf("修改成功!\n");
		printf("—————————————————————————————————————————\n");
		printf("|%-10s\t|%-10s\t|%-10s\t|%-10s\t|%-10s\t|\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("—————————————————————————————————————————\n");
		printf("|%-10s\t|%-10d\t|%-10s\t|%-10s\t|%-10s\t|\n", p->name,p->age,p->sex,p->telphone,p->address);
		printf("—————————————————————————————————————————\n");
	}
}

void ClearContact(contact_t *ct)         //清空通讯录
{
	ct->size = 0;
	printf("清除成功!\n");
}

void SortContact(contact_t *ct)          //按名字排序通讯录
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
	printf("排序成功!\n");
}