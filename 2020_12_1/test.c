#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//int CmpInt(const void* x, const void* y)
//{
//	int* xp = (int*)x;
//	int* yp = (int*)y;
//	if (*xp > *yp)
//	{
//		return 1;
//	}
//	else if (*xp < *yp)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void Show(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 32, 5, 2, 564, 35, 657, 86, 353, 9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Show(arr,num);
//	qsort(arr, num, sizeof(int), CmpInt);
//	Show(arr, num);
//	system("pause");
//	return 0;
//}


int CmpStr(const void* x, const void* y)
{
	char* xp = *(char**)x;
	char* yp = *(char**)y;
	return strcmp(xp, yp);
}
int main()
{
	char* strp[] = { "adsa", "1416", "davs", "adrs" };
	int num = sizeof(strp) / sizeof(strp[0]);
	qsort(strp, num, sizeof(char*), CmpStr);
	system("pause");
	return 0;
}


