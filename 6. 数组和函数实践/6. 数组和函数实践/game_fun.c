#include "game.h"

//获取棋盘上某点周围雷的数量
int GetBoradCount(char arr[ROWS][COLS], int x, int y)
{
	int count = 0;
	count = arr[x - 1][y - 1] + arr[x - 1][y] + 
		arr[x - 1][y + 1] + arr[x][y - 1] +
		arr[x][y + 1] + arr[x + 1][y - 1] +
		arr[x + 1][y] + arr[x + 1][y + 1] - 8 * '0';
	return count;
}

//临近位置没有雷就展开
void OpenBorad(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int x, int y)
{
	if (x < 1 || x > ROW || y < 1 || y > COL)
	{
		return; // 越界保护
	}
	if (arr2[x][y] != '*')
	{
		return;
	}
	if (arr1[x][y] == '1')
	{
		return;
	}
	int cnt = GetBoradCount(arr1, x, y);
	arr2[x][y] = (char)cnt + '0';
	if (cnt > 0)
	{
		return;
	}
	arr2[x][y] = ' ';

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (i != x || j != y)
            {
				OpenBorad(arr1, arr2, i, j);
			}
        }
    }
}

//初始化棋盘
void InitBorad(char arr[ROWS][COLS], int r, int c, char set)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = set;
		}
	}
}

//打印棋盘
void DisPlayBorad(char arr[ROWS][COLS], int r, int c)
{
	for (int i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= r; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= c; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//设置棋盘中雷的位置
void SetBorad(char arr[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

//排查雷
void FindBorad(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r * c - EASY_COUNT)
	{
		printf("输入一个要排查的坐标吧:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (arr2[x][y] != '*')
			{
				printf("坐标已被排查了呢~重新输入一个吧~~~\n");
			}
			else
			{
				if (arr1[x][y] == '1')
				{
					printf("很遗憾，游戏失败！！！\n");
					break;
				}
				else
				{
					OpenBorad(arr1, arr2, x, y);
					DisPlayBorad(arr2, ROW, COL);
					win = 0;                         
					for (int i = 1; i <= ROW; i++)
						for (int j = 1; j <= COL; j++)
							if (arr2[i][j] != '*')
								win++;
				}
			}	
		}
		else
		{
			printf("不可以使用这个坐标呢，重新输入一个吧~~~\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("太棒啦，你成功啦~~~\n");
	}
}