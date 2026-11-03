#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//不能创建临时变量，将两个变量的值进行交换
	int a = 0;
	int b = 0;

	printf("输入a的值:");
	scanf("%d", &a);
	printf("输入b的值:");
	scanf("%d", &b);
	printf("交换前：a = %d, b = %d\n", a, b);

	//交换(常用方法)
	/*int c = 0;
	c = a;
	a = b; 
	b = c;*/

	//交换(需求方法一) --- 潜在风险：存在溢出风险
	/*a = a + b;
	b = a - b;
	a = a - b;*/

	//交换(需求方法二, 按位异或)
	//异或是支持交换律的 ---> 两个相同的数异或的结果为0: a ^ a = 0
	a = a ^ b;  // a' = a ^ b
	b = a ^ b;  // b = a' ^ b = a ^ b ^ b = a
	a = a ^ b;  // a = a' ^ b = a ^ b ^ a = b


	printf("交换前：a = %d, b = %d\n", a, b);

	return 0;
}