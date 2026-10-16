#include <stdio.h>

int main()
{
	// sizeof操作符 ：可以用来获取数据类型的大小， 单位为字节， 1 字节为8 bite
	printf("%zu\n", sizeof(int));   // 4
	printf("%zu\n", sizeof(short));	// 2
	printf("%zu\n", sizeof(long));	// 4   C语言规定 sizeof(long) >= sizeof(int)
	printf("%zu\n", sizeof(long long));	// 8
	
	printf("%zu\n", sizeof(float));   // 4
	printf("%zu\n", sizeof(double));   // 8
	printf("%zu\n", sizeof(long double));   // 8   sizeof(long double) >= sizeof(double)

	printf("%zu\n", sizeof(char)); // 1

	int a = 123;
	printf("%zu\n", sizeof(a));	// int --> 4
	printf("%zu\n", sizeof a);	// sizeof后面为变量名是括号（）可以省略	


	
	short s = 12;
	int b = 10;

	printf("%zu\n", sizeof(s = b + 1));
	printf("s = %d\n", s);




/*C 语言使用 signed 和unsigned 关键字修饰 字符型和整型类型的。
	1. signed 关键字, 表示一个类型带有正负号, 包含负值;
	2. unsigned 关键字, 表示该类型不带有正负号, 只能表示零和正整数。*/ 


	rsize_t num = sizeof(int);
	printf("%zu", num);

	return 0;
}