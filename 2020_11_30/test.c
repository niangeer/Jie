#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

#define NAME "tom"                   
#define PASSWORD "123456"
int Login(int times)
{
	char name[64] = { 0 };
	char password[64] = { 0 };
	int ret = -1;
	do
	{
		printf("����������# ");
		scanf("%s", name);
		printf("����������# ");
		scanf("%s", password);
		if (strcmp(name, NAME) == 0 && strcmp(password, PASSWORD) == 0)
		{
			ret = 1;
			break;
		}
		else
		{
			times--;
			printf("�㻹ʣ%d�λ���\n", times);
			if (0 == times)
			{
				printf("��Ҫ%d�������ٴγ���\n", 3);
				Sleep(3000);
				times = 3;
			}
		}
	} while (1);
	return ret;
}
int main()
{
	int times = 3;
	int result = Login(times);
	if (1 == result)
	{
		printf("��¼�ɹ�\n");
	}
	else
	{
		printf("��¼ʧ��\n");
	}
	system("pause");
	return 0;
}