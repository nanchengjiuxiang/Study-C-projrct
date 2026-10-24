#include "game.h"

void menu()
{
	printf("------------------------------\n");
	printf("---------   1. play   --------\n");
	printf("---------   0. exit   --------\n");
	printf("------------------------------\n");
}

void game()
{
	char borad[ROWS][COLS];  //存放雷的信息
	char show_borad[ROWS][COLS];   //存放排查雷的信息

	//初始化棋盘
	InitBorad(borad, ROWS, COLS, '0');
	InitBorad(show_borad, ROWS, COLS, '*');
	//打印棋盘
	DisPlayBorad(show_borad, ROW, COL);
	//设置雷位置
	SetBorad(borad, ROW, COL);
	//排雷
	FindBorad(borad, show_borad, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏~\n");
			break;
		default:
			printf("选择错误，重新选择~\n");
			break;
		}
	} while (input);

	return 0;
}