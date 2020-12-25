#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	if (0 == y)
	{
		printf("Div zero!\n");
		return -1;
	}
	return x / y;
}
void Menu()
{
	printf("####################\n");
	printf("##1,Add      2,Sub##\n");
	printf("##3,Mul      4,Div##\n");
	printf("####################\n");
	printf("Plese Select# ");
}
#define NUM 5
int main()                                         //函数指针数组计算器    转移表
{
	int(*p[NUM])(int, int) = {NULL,Add,Sub,Mul,Div};
	int quit = 0;
	int select = 0;
	while (!quit)
	{
		Menu();
		scanf("%d", &select);
		if (select<1 || select>4)
		{
			printf("Enter error,try again!\n");
			continue;
		}
		int x = 0;
		int y = 0;
		printf("Please enter tow date# ");
		scanf("%d %d", &x, &y);
		int ret = p[select](x, y);
		printf("result=%d\n", ret);
	}
	system("pause");
	return 0;
}