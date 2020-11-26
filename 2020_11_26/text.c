#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

int Gcd(int a, int b)
{
	int i = 0;
	while (b != 0)
	{
		i = a%b;
		a = b;
		b = i;
	}
	return a;
}

int main()
{
	printf("请输入ab两数值# ");
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = Gcd(a, b);
	printf("%d\n", ret);
	system("pause");
	return 0;
}