#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAXSIZE 20
#define ERROR -1
#define OK 1

typedef int ElemType;
typedef int Status;

typedef struct
{
	ElemType data[MAXSIZE];
	int lengh;
}SqList;


//打印顺序表
Status PrintSqList(SqList* L);

//初始化顺序表 创建一个空的顺序表
Status InitSqList(SqList* L);

//获得第i位上的存储的数
Status GetElem(SqList*, int i, int* e);

//数据插入
Status SqListInsert(SqList*, int i,int e);

//数据删除
Status SqListDelete(SqList*, int i);

