#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	printf("输入一个整数:");
	scanf("%d", &num);
	int num_2 = num;
	int num_3 = num;




	//正数可以使用，但是负数有错误（负数在内存中是以补码的形式存在）
	int ans = 0;
	while (num)
	{  
		if ((num % 2) == 1)
		{
			ans++;
		}
		num /= 2;
	}
	printf("%d 的二进制位中存在 %d 个数字1\n", num, ans);




	//使用按位与 (&) ---> 效率不是很高！！！
	int count = 0;
	for (int i = 0; i < 32; i++) //必须32次，导致效率降低
	{	
		//任何一个数与1按位与，都可以得到它的二进制的最低位
		if (((num_2 >> i) & 1) == 1)  //去除二进制中的最后一位
		{
			count++;
		}
	}
	printf("%d 的二进制位中存在 %d 个数字1\n", num, count);




	//高效算法(更优的算法) ---> Brian Kernighan算法
	//n = n & (n - 1) ---> 把二进制中最右边的1去掉，循环最后结果为0
	int one_num = 0;
	while (num_3)
	{
		num_3 = num_3 & (num_3 - 1);
		one_num++;
	}
	printf("%d 的二进制位中存在 %d 个数字1\n", num, one_num);

	return 0;
}