#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*逻辑运算符提供逻辑判断功能, 用于构建更复杂的表达式, 主要有下面三个运算符。
		1. !: 逻辑取反运算符(改变单个表达式的真假)。
		2. && : 逻辑与运算符, 就是并且的意思(两侧的表达式都为真, 则为真, 否则为假)。
		3. || : 逻辑或运算符, 就是或者的意思(两侧至少有一个表达式为真, 则为真, 否则为假
		注 : C语言中, 非0表示真, 0表示假*/


	//int flag = 0;
	//scanf("%d", &flag);

	//if (flag)  //当 flag 为非 0 时，该条件成立
	//{
	//	printf("执行代码一\n");
	//}

	//if (!flag)  //当 flag 为 0 时，该条件成立
	//{
	//	printf("执行代码二\n");
	//}

	//printf("%d\n", !flag);
	//printf("%d\n", flag);


	//int month = 0;
	//printf("输入月份：");
	//scanf("%d", &month);

	//if (month >= 3 && month <= 5)  //条件同时成立
	//{
	//	printf("%d月为春天！！\n", month);
	//}
	//else
	//{
	//	printf("%d月不是春天！！\n", month);

	//}


	//if (month == 12 || month == 1 || month == 2)
	//{
	//	printf("%d月为冬天！！！\n", month);
	//}
	//else
	//{
	//	printf("%d月不是冬天！！！\n", month);
	//}



	//闰年的判断
	int year = 0;
	printf("输入年份：");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d年为闰年！！\n", year);
	}
	else
	{
		printf("%d年不是闰年！！\n", year);
	}
	

	/*短路：C语言逻辑运算符还有一个特点, 它总是先对左侧的表达式求值, 再对右边的表达式求值, 这个顺序是保证的。
		  如果左边的表达式满足逻辑运算符的条件, 就不再对右边的表达式求值。这种情况称为“短路”。*/

	return 0;
}