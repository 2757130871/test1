#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"



void menu(int input)
{
	printf("----------------------------\n");
	printf("----------------------------\n");
	printf("---------1. ��ʼ��Ϸ---------\n");
	printf("---------0. �˳���Ϸ---------\n");
	printf("----------------------------\n");
	printf("----------------------------\n");

	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("���˳�\n");
		break;
	default:
		printf("��ӡ����\n");
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

