#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//数组元素在内存中是连续存放的
	//随数组下标增长，地址是由低到高增长
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		printf("数组arr1[%d]:%p\n", i, &arr1[i]);
	}

	return 0;
}