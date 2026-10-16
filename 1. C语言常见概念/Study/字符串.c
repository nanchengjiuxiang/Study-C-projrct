#include <stdio.h>

int main()
{
	printf("abcdef\n");
	printf("%s\n", "abcdef");

	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	return 0;
}