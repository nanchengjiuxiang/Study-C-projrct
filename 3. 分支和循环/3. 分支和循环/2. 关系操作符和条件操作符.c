#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main ()
{
	////关系操作符的返回值是 0（假）或 1（真）
	//printf("%d\n", 3 > 5);
	//printf("%d\n", 3 > 1);

	//int num = 0;
	//scanf("%d", &num);
	//if (3 == num)  //num = 3为赋值操作，这会导致判断结果为3（非0，为真）---> 为了防止误写，可以将常量放在等式左边
	//	printf("%d为3\n", num);

	//int i = 3;
	//int j = 8;
	//int k = 5;

	//if (i < j < k)   //i < j 为真，则为 1 ，然后会将 1 与 k 比较，1 < k 为真
	//	printf("执行代码1\n");

	//if (i < j && j < k)   //&& ---> 并且
	//	printf("执行代码2\n");



	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	//求最大值
	int max = (a > b ? a : b);
	//求最小值
	int min = (a > b ? b : a);
	printf("max = %d\n", max);
	printf("min = %d\n", min);


	return 0;
}