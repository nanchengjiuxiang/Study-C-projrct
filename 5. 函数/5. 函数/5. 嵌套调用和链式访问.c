#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//嵌套调用就是函数之间的互相调用, 每个函数就像一个乐高零件, 正是因为多个乐高的零件互相无缝的配合才能搭
//建出精美的乐高玩具, 也正是因为函数之间有效的互相调用, 最后写出来了相对大型的程序。


//计算是否为闰年
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

//某月的天数
int day_num(int year, int month)
{
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

	if (is_leap_year(year))
	{
		day[1] = 29;
	}

	return day[month - 1];
}


int main()
{
	int year = 0;
	int month = 0;

	printf("输入年份：");
	scanf("%d", &year);

	printf("输入月份：");
	scanf("%d", &month);

	printf("%d年%d月有 %d 天\n", year, month, day_num(year, month));


	//所谓链式访问就是将一个函数的返回值作为另外一个函数的参数, 像链条一样将函数串起来就是函数的链式访问。
	printf("%d\n", strlen("abcdef"));
	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}