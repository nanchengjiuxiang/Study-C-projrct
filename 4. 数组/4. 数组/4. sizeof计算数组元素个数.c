#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	printf("%zu\n", sizeof(arr));
	printf("%zu\n", sizeof(arr[0]));

	printf("数组元素个数：%zu\n", sizeof(arr) / sizeof(arr[0]));

	//计算元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}


	return 0;
}