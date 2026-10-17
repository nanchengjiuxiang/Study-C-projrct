#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//在C语言中，0表示假，非0表示真
int main()
{
	// 输入一个整数，判断是否为奇数
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
	{
		printf("%d 为奇数\n", num);
	}
	else {
		printf("%d 为偶数\n", num);
	}

	return 0;
}