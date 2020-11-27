#include <stdio.h>
#include <Windows.h>

#define Not_Found -1                         

int BinSearch(int num, int arr[], int n)      
{
	int left = 0;
	int right = num - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid]>n)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return Not_Found;
}

int main()
{
	int n = 66;
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int ret = BinSearch(num, arr, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}