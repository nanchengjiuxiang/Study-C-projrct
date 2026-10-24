#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"

//一般在企业中我们写代码时候, 代码可能比较多, 不会将所有的代码都放在一个文件中;我们往往会根据程序的功能, 将代码拆分放在多个文件中。
//一般情况下, 函数的声明、类型的声明放在头文件(.h)中, 函数的实现是放在源文件(.c)文件中。

int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个数：");
	scanf("%d%d", &a, &b);

	printf("%d", add(a, b));

	return 0;
}