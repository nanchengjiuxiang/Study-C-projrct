#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int plus (int a, int b)
{
	return a + b;
}

int main ()
{
	int a = 5;
	int b = 6;

	printf("%d\n", plus(a, b));

	return 0;
}