#pragma once

#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("--------1.开始游戏--------\n");
	printf("--------0.退出游戏--------\n");
}

void Game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	PrintBoard(mine, ROWS, COLS);
	PrintBoard(show, ROWS, COLS);

	//设置雷
	SetMine(mine, ROW, COLS);
	PrintBoard(mine, ROWS, COLS);
}


int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入有误，重新输入\n");
			break;
		}

	} while (input);



	return 0;
}