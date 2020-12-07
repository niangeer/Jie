#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <assert.h>

#pragma warning(disable:4996)

int CmpInt(const void* _x, const void* _y)    
{
	int *x = (int *)_x;
	int *y = (int *)_y;
	if (*x > *y)
	{
		return 1;
	}
	else if (*x < *y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int Cmpchar(const void* x, const void* y)
{
	char* xp = *(char**)x;
	char* yp = *(char**)y;
	return strcmp(xp, yp);
}

void show(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void MySwap(char* str, char* dst, int size)
{
	while (size)
	{
		char temp = *str;
		*str = *dst;
		*dst = temp;
		str++;
		dst++;
		size--;
	}
}

void my_qsort(void* arr, int num, int size, int(*Cmpar)(const void* x, const void* y))
{
	assert(arr != NULL);
	assert(*Cmpar != NULL);
	char* e = (char*)arr;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (Cmpar(e + j*size,e+(j+1)*size)>0)
			{
				MySwap(e + j*size, e + (j + 1)*size, size);
			}

		}
	}
}

int main()
{
	int arr[] = { 4, 2, 3, 45, 32, 98, 299, 345, 435, 24 };
	int num = sizeof(arr) / sizeof(arr[0]);
	show(arr, num);
	my_qsort(arr, num, sizeof(int*), CmpInt);
	show(arr, num);
	system("pause");
	return 0;
}

//int main()
//{
//	char* str[] = { "abcd", "acac", "2141", "dsfa" };           //指针数组里面存的是地址，与首元素地址不同，首元素地址解引用得到它
//	int num = sizeof(str) / sizeof(str[0]);
//	my_qsort(str, num, sizeof(char*), Cmpchar);
//	system("pause");
//	return 0;
//}


