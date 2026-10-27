#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(size_t n)
{
	if (n > 9)
	{
		print(n / 10);
	}
		printf("%zu\n", n % 10);
}

int main()
{
	size_t num = 0;
	printf("输入一个数:");
	scanf("%zu", &num);

	printf("顺序打印的数为:\n");

	print(num);

	return 0;
}