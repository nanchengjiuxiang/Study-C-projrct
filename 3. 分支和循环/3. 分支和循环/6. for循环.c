#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//打印1-10
	//for循环有三个部分：初始化；判断；调整
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	//计算1-100之间3的倍数的数字之和
	//方法一
	int sum = 0;
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("1-100之间3的倍数的数字之和为 %d\n", sum);

	//方法二
	int sum2 = 0;
	for (int i = 3; i < 100; i += 3)
	{		
		sum2 += i;
	}
	printf("1-100之间3的倍数的数字之和为 %d\n", sum2);


	//for循环的三个部分是可以省略的
	//判断部分省略时，for循环则会恒成立，不终止，陷入死循环
	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d\n", i);
	}


	return 0;
}