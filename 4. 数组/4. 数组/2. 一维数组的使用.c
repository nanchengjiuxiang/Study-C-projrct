#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//C语言规定数组是有下标的,下标是从0开始的,假设数组有n个元素,最后一个元素的下标是n-1,下标就相当于数组元素的编号
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//下标:          0  1  2  3  4  5  6  7  8  9
	
	//在C语言中数组的访问提供了一个操作符[],这个操作符叫:下标访问操作符；有了下标访问操作符, 我们就可以轻松的访问到数组的元素了
	printf("%d\n", arr1[0]);
	printf("%d\n", arr1[5]);
	printf("%d\n", arr1[9]);

	arr1[6] = 70;
	printf("%d\n", arr1[6]);

	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("arr2:%d\n", arr2[i]);
	}

	
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = -arr2[i];
		printf("arr2:%d\n", arr2[i]);
	}


	int arr3[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("输入10个数：");
		scanf("%d", &arr3[i]);

	}

	return 0;
}