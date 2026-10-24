#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define EASY_COUNT 10

#define ROWS ROW+2
#define COLS COL+2

void InitBorad(char arr[ROWS][COLS], int r, int c, char set);
void DisPlayBorad(char arr[ROWS][COLS], int r, int c);
void SetBorad(char arr[ROWS][COLS], int r, int c);
void FindBorad(char arr[ROWS][COLS], char arr2[ROWS][COLS], int r, int c);
int GetBoradCount(char arr[ROWS][COLS], int x, int y);
void OpenBorad(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int x, int y);