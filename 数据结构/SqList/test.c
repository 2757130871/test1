#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

int main()
{
	SqList  s1;
	//初始化
	InitSqList(&s1);

	//插入数据
	SqListInsert(&s1, 1, 1);
	SqListInsert(&s1, 2, 3);
	SqListInsert(&s1, 3, 5);
	SqListInsert(&s1, 4, 7);

	PrintSqList(&s1);

	//中间插入
	//SqListInsert(&s1, 2, 2);

	//尾部删除
	SqListDelete(&s1, 10);
	PrintSqList(&s1);
	//中间删除
	SqListDelete(&s1, 1);
	PrintSqList(&s1);
	//打印顺序表
	PrintSqList(&s1);

	return 0;
}