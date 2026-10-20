#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//打印1-10
	int a = 1;
	while (a <= 10)
	{
		printf("%d\n", a++);
	}

	//逆序打印
	int num = 0;
	int ans = 0;
	printf("输入一个数：");
	scanf("%d", &num);
	
	while (num)
	{
		int temp = 0;
		//将num的个位赋值给temp
		temp = num % 10;
		//去掉num的个位
		num = num / 10;
		ans = ans * 10 + temp;
	}

	printf("%d\n", ans);


	return 0;
}