#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"



void menu(int input)
{
	printf("----------------------------\n");
	printf("----------------------------\n");
	printf("---------1. 开始游戏---------\n");
	printf("---------0. 退出游戏---------\n");
	printf("----------------------------\n");
	printf("----------------------------\n");

	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("已退出\n");
		break;
	default:
		printf("打印错误\n");
		break;
	}
}

int main()
{

	int input;
	//srand((unsigned int)time(NULL));

	do
	{
		scanf_s("%d", &input);
		menu(input);

	} while (input);

}

