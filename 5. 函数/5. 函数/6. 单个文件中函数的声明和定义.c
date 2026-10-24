#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//函数声明 -- 当函数定义在main函数之后时，需要先声明
bool is_leap_year(int year);


int main()
{
	int year = 0;
	printf("输入年份：");
	scanf("%d", &year);

	if (is_leap_year(year))
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}

	return 0;
}

//函数定义 -- 是一种特殊的声明
bool is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}