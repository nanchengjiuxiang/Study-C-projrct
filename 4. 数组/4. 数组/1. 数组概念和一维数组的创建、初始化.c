#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//创建数组
	int math[20];
	char ch[10];
	double score[30];

	//数组初始化（完全初始化）
	int num[5] = { 1, 2, 3, 4, 5 };
	double d[5] = { 3.0, 2.5, 3.4, 5.6, 6.3 };

	//不完全初始化：剩余的元素会默认初始化为0
	int num2[10] = { 1, 2, 3 };

	//默认元素数目为5
	int arr[] = { 1, 2, 3, 4, 5 };

	//10个元素
	int arr2[10] = { 0 };
	//1个元素
	int arr3[] = { 0 };



	//数组的类型
	//int 是数组元素类型
	int arr4[10] = { 0 };  //该数组类型为 int [10]
	printf("%zu\n", sizeof(arr4));
	printf("%zu\n", sizeof(int [10]));

	return 0;
}