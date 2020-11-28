#include <stdio.h>
#include <Windows.h>

void BubbleSort(int arr[], int num)      
{
	for (int i = 0; i < num - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < num - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

void show(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 100, 99, 88, 77, 66, 55, 44, 33, 22, 11, };
	int num = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, num);
	show(arr, num);
	printf("\n");
	system("pause");
	return 0;
}