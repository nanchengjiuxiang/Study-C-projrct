#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//在C语言中，0表示假，非0表示真
int main()
{
	// 输入一个整数，判断是否为奇数
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)   //if在控制一条语句时，不需要加大括号({})
		printf("%d 为奇数\n", num);
	
	else 
		printf("%d 为偶数\n", num);




	int age = 0;
	printf("输入年龄：");
	scanf("%d", &age);

	if (age >= 18)   //if在控制多条语句时，需要加上大括号
	{
		printf("成年啦！\n");
		printf("大于18岁啦！\n");
	}
	else
	{
		printf("未成年！\n");
		printf("小于18！\n");
	}




	//输入一个数判断时是0，正数，负数
	int num = 0;
	printf("输入一个数：");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("%d为正数\n", num);
		if (num % 2 == 0)
		{
			printf("%d为偶数\n", num);
		}
		else
		{
			printf("%d为奇数\n", num);
		}
	}

	else if(num = 0)
	{
		printf("%d是0\n", num);
	}
	else
	{
		printf("%d是负数\n", num);
	}





	// 悬空else问题：如果有多个if和else, 可以记住这样一条规则, else总是跟最接近的if匹配。	

	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");

	return 0;
}