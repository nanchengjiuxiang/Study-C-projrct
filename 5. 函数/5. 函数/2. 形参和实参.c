#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)   //形参x，y
{
	return x + y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("输入a，b的值：");
	scanf("%d%d", &a, &b);
	printf("%d\n", Add(a, b));   //实参a，b
	//形参的实例化

	return 0;
}