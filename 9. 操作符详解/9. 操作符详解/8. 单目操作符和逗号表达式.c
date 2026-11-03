#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);

	return 0;
}