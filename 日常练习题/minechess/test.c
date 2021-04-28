#pragma once

#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("--------1.��ʼ��Ϸ--------\n");
	printf("--------0.�˳���Ϸ--------\n");
}

void Game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	PrintBoard(mine, ROWS, COLS);
	PrintBoard(show, ROWS, COLS);

	//������
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
			printf("�˳�\n");
			break;
		default:
			printf("����������������\n");
			break;
		}

	} while (input);



	return 0;
}