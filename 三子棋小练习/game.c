#pragma once

#include "game.h"

void InitChessBoard(char(*arr)[COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void PrintBoard(char arr[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);

			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i < row - 1)
		{
			int z;
			for (z = 0; z < col; z++)
			{
				printf("___");
			}
			printf("\n");
		}


	}

}

//�������
PlayerMove(char arr[][COL], int row, int col)
{
	int x, y;

	while (1)
	{
		printf("�������,������λ��>");
		scanf_s("%d%d", &x, &y);
		if (x >= 0 && x <= row && y >= 0 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�Ѿ�������\n");
			}
		}
		else
		{
			printf("���벻��ȷ\n");
		}
	}

}
//��������
ComputerMove(char arr[][COL], int row, int col)
{
	printf("��������\n");

	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}

}

char IsWin(char arr[ROW][COL], int row, int col)
{

	int z;
	for (z = 0; z < 3; z++)
	{
		int i;
		for (i = 0; i < 3; i++)
		{
			printf("%c ", arr[z][i]);
		}
		printf("\n");
	}


	int i;
	for (i = 0; i < col; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2] != ' ')
		{
			return arr[i][0];
		}
	}

	for (i = 0; i < row; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
		{
			return arr[0][i];
		}
	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
	{
		return arr[0][0];
	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != ' ')
	{
		return arr[2][0];
	}


	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 'C';
			}
		}
	}

	return 'P';
}


void game()
{
	//�����ά����洢���� 
	int arr[ROW][COL] = { 0 };
	char ret;


	//��ʼ��
	InitChessBoard(arr, ROW, COL);

	//��ӡchessBoard
	PrintBoard(arr, ROW, COL);

	//�������
	while (1)
	{
		PlayerMove(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);

		if (ret != 'C')
		{
			break;
		}

		PrintBoard(arr, ROW, COL);

		ComputerMove(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);

		if (ret != 'C')
		{
			break;
		}

		PrintBoard(arr, ROW, COL);
	}

	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

	PrintBoard(arr, ROW, COL);
}