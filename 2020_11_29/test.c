#include <stdio.h>
#include <Windows.h>

#pragma  warning(disable:4996)

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
	return x*y;
}
int Div(int x, int y)
{
	if (0 == y)
	{
		printf("Div Zero!\n");
		return -1;
	}
	return x/y;
}
int main()
{
	int x = 0;
	int y = 0;
	int quit = 0;
	while (!quit)
	{
		printf("Please Enter Two Data # ");
		scanf("%d %d", &x, &y);
		int ret = Div(x, y);
		printf("result=%d\n", ret);
	}
	system("pause");
	return 0;
}