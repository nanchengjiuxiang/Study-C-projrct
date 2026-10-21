#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//找出100-200之间的素数（只能被1和本身整除的数字）
	for (int i = 100; i < 201; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)  //在2 - i-1之间的所有数字都不能将i整除
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)  //当i能被自身整除，且之前的数都不能将i整除时，i为素数
		{
			printf("100-200之间的素数为%d\n", i);
		} 
	}

	


	//优化一：
	for (int i = 100; i < 201; i+=2)  //在偶数里面找i，将效率提高
	{
		int j = 0;
		for (j = 2; j < i; j++)  //在2 - i-1之间的所有数字都不能将i整除
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)  //当i能被自身整除，且之前的数都不能将i整除时，i为素数
		{
			printf("100-200之间的素数为%d\n", i);
		}
	}




	//优化二：
	//假设 i = a * ；则a和b是i的两个因子，所以a和b中一一定有一个数字是 <= √i
	for (int i = 100; i < 201; i += 2)  //在偶数里面找i，将效率提高
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)  //在2 - √i之间的所有数字都不能将i整除,sqrt()为开跟根
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)  //当i能被自身整除，且之前的数都不能将i整除时，i为素数
		{
			printf("100-200之间的素数为%d\n", i);
		}
	}


	return 0;
}