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
		printf("请输入姓名# ");
		scanf("%s", name);
		printf("请输入密码# ");
		scanf("%s", password);
		if (strcmp(name, NAME) == 0 && strcmp(password, PASSWORD) == 0)
		{
			ret = 1;
			break;
		}
		else
		{
			times--;
			printf("你还剩%d次机会\n", times);
			if (0 == times)
			{
				printf("需要%d秒后才能再次尝试\n", 3);
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
		printf("登录成功\n");
	}
	else
	{
		printf("登录失败\n");
	}
	system("pause");
	return 0;
}