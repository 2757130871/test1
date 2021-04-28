#pragma once

#include "game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			arr[i][j] = set;
		}
	}

}

void PrintBoard(char arr[ROWS][COLS], int rows, int cols)
{
	printf("----------GAME----------------\n");
	int i, j;
	for (i = 1;i < rows - 1;i++)
	{
		for (j = 1;j < cols - 1;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("----------GAME----------------\n");

}

void SetMine(char arr[ROWS][COLS], int rows, int cols)
{
	int count = 10;

	while (count)
	{
		int x = rand() % 10;
		int y = rand() % 10;

		if (x > 0 && y > 0 && arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}

}