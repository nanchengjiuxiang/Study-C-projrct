#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//n的阶乘
int f(int n)
{
	if (n == 1)
		return 1;
	else
		return n * f(n - 1);
}

int main()
{
	int n = 0;
	printf("输入一个数：");
	scanf("%d", &n);

	printf("n的阶乘：%d\n", f(n));

	return 0;
}