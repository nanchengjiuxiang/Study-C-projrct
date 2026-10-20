#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//打印1-10的值
	int i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);


	long long num = 0;
	printf("输入一个正整数：");
	scanf("%lld", &num);

	int cnt = 0;
	do {
		num /= 10;
		cnt++;
	} while (num);

	printf("%d\n", cnt);

	return 0;
}