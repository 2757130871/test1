#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//扫雷代码实现
void game()
{
	char mine[ROWS][COLS]={ 0 };//用一个二维数组存储雷的信息
	char show[ROWS][COLS]={ 0 };//用一个二维数组展示雷场
	
	//初始化雷场
	Init_board(mine , ROWS , COLS , '0');
	Init_board(show , ROWS , COLS , '*');

	//打印雷场
	Display_board(show,ROW,COL);

	//布雷
	Set_Mine(mine,ROW,COL,COUNT);

	//扫雷
	Find_mine(mine,show,ROW,COL,COUNT);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("扫雷游戏开始\n");
				printf("总共有%d个雷\n",COUNT);
				game();
				break;
			case 0:
				printf("退出扫雷\n");
			default:
				printf("选择错误，请重新选择\n");
		}
	}while(input);
	return 0;
}
