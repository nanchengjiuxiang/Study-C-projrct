#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	printf("%d\n", arr[2][4]);

	//输入值
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}

	//输出值
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}


	//二维数组的元素在内存中是连续存放的
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("arr[%d][%d]地址：%p\n", i, j, &arr[i][j]);
		}
	}


	return 0;
}