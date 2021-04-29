#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define COUNT 10

//初始化雷场
void Init_board(char board[ROWS][COLS],int rows,int cols,char set);

//展示雷场
void Display_board(char board[ROWS][COLS],int row,int col);

//布雷
void Set_Mine(char mine[ROWS][COLS],int row,int col,int count);

//扫雷
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int count);

//坐标不是雷，周围不是雷，则展开一片
void OpenMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int i,int j);

//打印菜单
void menu();
