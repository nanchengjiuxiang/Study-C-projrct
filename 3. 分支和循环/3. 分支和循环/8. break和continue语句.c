#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*break 的作用是用于永久的终止循环, 只要break被执行, 直接就会跳出循环, 继续往后执行。
	continue的作用是跳过本次循环中continue后边的代码, 在for循环和while循环中有所差异的。*/

	int i = 1;
	 
	while (i <= 10)
	{
		printf("%d ", i);
		if (i == 5)   //打印到5就退出循环
		{
			break;
		}
		i++;
	}

	int j = 1;

	while (j <= 10)
	{
		j++;
		if (j == 5)
		{
			continue;
		}
		printf("%d ", j);
	}


	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n", i);
	}

	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
	}


	return 0;
}