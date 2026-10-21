#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int random_num(int min, int max)
{	
	srand((unsigned int)time(NULL));
	int num = rand() % (max - min + 1) + min;
	return num;
}


void game()
{
	//1. 生成一个随机数
	int min, max;
	printf("输入随机数的最小值：");
	scanf("%d", &min);
	printf("输入随机数的最大值：");
	scanf("%d", &max);

	int num = random_num(min, max);

	//2. 猜数字
	int guss_num = 0;
	time_t start = time(NULL);
	while (1)
	{
		printf("输入你猜的数字：");
		scanf("%d", &guss_num);
		if (guss_num < num) 
		{
			printf("你猜小啦！\n");
		}
		else if (guss_num > num)
		{
			printf("你猜大啦！\n");
		}
		else
		{
			printf("你猜对啦！！真棒，该随机数为%d\n", num);
			break;
		}
	} 
	time_t end = time(NULL);
	printf("本次游戏时间：%ds\n", end - start);
}



int main()
{
	int op_num = 0;
	do
	{
		printf("---------------------------\n");
		printf("-------  1. PLAY  ---------\n");
		printf("-------  0. EXIT  ---------\n");
		printf("---------------------------\n");
		printf("选择：");
		scanf("%d", &op_num);

		switch (op_num)
		{
		case 1:
			printf("猜数字\n");
			game();  //玩游戏的函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (op_num);

	return 0;
}