#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h" 

void game()
{
	char board[ROW][COL];
	
	//棋盘初始化
	InitBoard( board , ROW , COL );
	//打印棋盘
	DisplayBoard( board, ROW, COL);
	while(1)
	{
		char ret=0;
		//玩家下棋
		PlayerPlay(board , ROW , COL);
		DisplayBoard( board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if(ret == 'Q')
		{
			  printf("平局\n");
			  break;
		}
		else if(ret == '*')
		{
			  printf("玩家取胜\n");
			  break;
		}
		//电脑下棋
		ComputerPlay(board , ROW , COL);
		DisplayBoard( board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if(ret == 'Q')
		{
			  printf("平局\n");
			  break;
		}
		else if(ret == '#')
		{
			  printf("电脑取胜\n");
			  break;
		}
	}	
}

void menu()
{
	printf("**************************\n");
	printf("*****	  1.play	 *****\n");
	printf("*****	  0.exit	 *****\n");
	printf("**************************\n");	
}
int main()
{	
	int input = 0;
	menu();
	srand((unsigned int)time(NULL));
	do
	{
		printf("是否玩三子棋游戏：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	}while(input);
}
