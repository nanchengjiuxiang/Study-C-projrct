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

	int day = 0;
	printf("输入一个天数：");
	scanf("%d", &day);

	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入的天数不合法\n");
	}

	return 0;
}