#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int num = 0;
	printf("输入一个数：");
	scanf("%d", &num);
	if (num % 3 == 0)
		printf("%d除以3余0\n", num);
	else if (num % 3 == 1)
		printf("%d除以3余1\n", num);
	else
		printf("%d除以3余2\n", num);


	switch (num % 3)
	{
	case 0:
		printf("%d除以3余0\n", num);
		break;   //break为跳出当前语句
	case 1:
		printf("%d除以3余1\n", num);
		break;
	case 2:
		printf("%d除以3余2\n", num);
		break;
	}




	return 0;
}