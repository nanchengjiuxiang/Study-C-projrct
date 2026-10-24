#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组作为参数传递给了set_arr和print_arr函数了, 那这两个函数应该如何设计呢 ?
//这里我们需要知道数组传参的几个重点知识 :
//	1. 函数的形式参数要和函数的实参个数匹配
//	2. 函数的实参是数组, 形参也是可以写成数组形式的
//	3. 形参如果是一维数组, 数组大小可以省略不写
//	4. 形参如果是二维数组, 行可以省略, 但是列不能省略
//	5. 数组传参, 形参是不会创建新的数组的
//	6. 形参操作的数组和实参的数组是同一个数组

//将数组全部元素改为-1
void set_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = -1;
	}
}

//打印数组所有元素
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//将二维数组的所有元素修改
void set_arr2(int arr[][5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = i + j;
		}
	}
}

//打印二维数组
void print_arr2(int arr[][5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr1[10] = { 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	print_arr(arr1, sz);

	//函数将arr的内容全部设置成-1
	set_arr(arr1, sz);

	//函数打印数组内容
	print_arr(arr1, sz);


	//二维数组
	int arr2[3][5] = { 0 };

	set_arr2(arr2, 3, 5);

	print_arr2(arr2, 3, 5);

	return 0;
}