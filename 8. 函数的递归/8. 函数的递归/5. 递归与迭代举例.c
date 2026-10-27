#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//不适合递归解决，占用内存大
int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

//循环方法
int fib_num(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	//求第n个斐波那契数
	int n = 0;
	printf("输入一个数:");
	scanf("%d", &n);

	//printf("%d", fib(n));


	//循环方式
	printf("%d", fib_num(n));

	return 0;
}