#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//题目:给定一个升序的整型数组, 在这个数组中查找到指定的值n, 找到了就打印n的下标, 找不到就打印 : “找不到"。
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//效率低
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("下标为:%d\n", i);
			break;
		}
	}

	if (i == sz)
	{
		printf("找不到\n");
	}



	//二分查找
	int left = 0;
	int right = sz - 1;
	int mid = 0;

	while (left <= right)
	{
		mid = (right - left) / 2 + left;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("下标为:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}

	return 0;
}