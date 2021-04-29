#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//打印菜单
void menu()
{
	printf("****************************\n");
	printf("*****      1.play      *****\n");
	printf("*****      0.exit      *****\n");
	printf("****************************\n");
}
//初始化棋盘
void Init_board(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i = 0;
	int j = 0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void Display_board(char board[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	for(j = 0;j<=row;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

//设置雷
//雷-----'1'
//非雷---'0'

void Set_Mine(char mine[ROWS][COLS],int row,int col,int count)
{
	//布雷的个数：count
	//布一个雷，count自减1
	while(count)
	{
		int x = rand()%row + 1;
		int y = rand()%col + 1;
		if(mine[x][y]=='0')
		{
			mine[x][y]='1';
			count--;
		}
	}
}

//扫雷位置不是雷，获取扫雷位置坐标周围雷的个数
int getMine_Numble(char mine[ROWS][COLS],int i,int j)
{
	int x = 0;
	int y = 0;
	int sum=0;
	for(x=i-1;x<=i+1;x++)
	{
		for(y=j-1;y<=j+1;y++)
		{
			if(mine[x][y]=='1')
				sum++;
		}
	}
	return sum;
}

//如果坐标不是雷，周围不是雷，则展开一片
//如果坐标不是雷，周围有雷，在该位置放置周围雷的个数
void OpenMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int i,int j)
{
	//获取周围雷的个数
	int ret=getMine_Numble(mine,i,j);

	//坐标不是雷，周围不是雷，则展开一片
	if(ret==0)
	{
		//如果坐标周围不是雷，坐标位置置为空格
		show[i][j]=' ';

		//判断周围位置的周围雷的情况
		if(i-1 >= 1 && j-1 >= 1 &&show[i-1][j-1]=='*')
			OpenMine(mine,show,row,col,i-1,j-1);

		if(i-1 >= 1 && j >= 1 && show[i-1][j]=='*')
			OpenMine(mine,show,row,col,i-1,j);

		if(i-1 >= 1 && j+1<=col && show[i-1][j+1]=='*')
			OpenMine(mine,show,row,col,i-1,j+1);

		if(i>=1 && j-1>=1 && show[i][j-1]=='*')
			OpenMine(mine,show,row,col,i,j-1);

		if(i>=1 && j+1<=col && show[i][j+1]=='*')
			OpenMine(mine,show,row,col,i,j+1);

		if(i+1<=row && j-1>=1 && show[i+1][j-1]=='*')
			OpenMine(mine,show,row,col,i+1,j-1);

		if(i+1<=row && j>=1 && show[i+1][j]=='*')
			OpenMine(mine,show,row,col,i+1,j);

		if(i+1<=row && j+1<=col && show[i+1][j+1]=='*')
			OpenMine(mine,show,row,col,i+1,j+1);
	}

	//如果坐标不是雷，周围有雷，在该坐标放置周围雷的个数
	else
	{
		show[i][j]=ret+'0';
	}
}

//判断扫雷是否成功
//如果展示棋盘上'*'的个数与雷的个数相同，则成功
int IsWin(char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int sum = 0;
	for(x=1;x<=row;x++)
	{
		for(y=1;y<=col;y++)
		{
			if(show[x][y]=='*')
				sum++;
		}
	}
	return sum;
}

//扫雷
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int count)
{
	int i = 0;
	int j = 0;
	int flag = IsWin(show,row,col);
	while(flag>count)
	{
		printf("请输入扫雷的位置坐标：>");
		scanf("%d%d",&i,&j);

		//判断坐标是否合法
		if(i>= 1&& i<=row && j>=1 && j<=col)
		{
			//如果是雷，打印雷场信息，并结束
			if(mine[i][j]=='1')
			{
				//
				system("cls");
				printf("总共有%d个雷\n",count);
				Display_board(mine,row,col);
				printf("已触雷，游戏结束\n");
				break;
			}
			//如果不是雷，判断周围雷的情况
			else
			{
				OpenMine(mine,show,ROW,COL,i,j);
				//打印之前清屏
				system("cls");
				printf("总共有%d个雷\n",count);
				Display_board(show,row,col);

				//判断是否扫雷成功
				flag = IsWin(show,row,col);
			}
		}
		else
			printf("坐标不合法，请再次输入\n");
	}
	//扫雷成功
	if(flag==count)
	{
		printf("恭喜你。扫雷成功\n");
	}
}
