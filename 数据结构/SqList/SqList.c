#define _CRT_SECURE_NO_WARNINGS 1

#include "SqList.h"


//打印顺序表

Status PrintSqList(SqList* L)
{
	if (L->lengh == 0)
	{
		printf("顺序表为空");
		return ERROR;
	}

	int i;
	for (i = 0;i < L->lengh;i++)
	{
		printf("%d ", L->data[i]);
	}
	return OK;
}

//初始化顺序表 将顺序表所有元素和长度置为0
Status InitSqList(SqList* L)
{
	int i;
	for (i = 0;i < MAXSIZE;i++)
	{
		L->data[i] = 0;
	}

	L->lengh = 0;
	return OK;
}

//获得参数
Status GetElem(SqList* L, int i, int* e)
{
	if (L->lengh == 0 || i < 1 || i > L->lengh)
	{
		return ERROR;
	}

	*e = L->data[i - 1];

	return OK;
}

//插入数据
//1. 顺序表满了
//2. 插入的位置无效
//3. 不在尾部插入
Status SqListInsert(SqList* L, int i, int e)
{
	if (L->lengh == MAXSIZE)
	{
		printf("顺序表满了");
		return ERROR;
	}

	if (i < 1 || i > L->lengh + 1) //只允许在现有数据后插入
	{
		return ERROR;
	}

	if (i <= L->lengh)  //在数据间插入需要将插入位置后的数据全部向后移动一位
	{
		int j;
		for (j = L->lengh;j >= i;j--)
		{
			L->data[j] = L->data[j - 1];
		}
	}

	L->data[i - 1] = e;
	L->lengh++;

	return OK;
}


//删除数据
//1. 当前顺序表为空或者删除位置无效
//2. 尾部删除
//3. 数据中间删除

Status SqListDelete(SqList* L, int i)
{
	if (L->lengh == 0 )
	{
		printf("顺序表为空，无法删除。");
		return ERROR;
	}

	if (i < 1 || i > L->lengh)
	{
		printf("删除失败");
		return ERROR;
	}

	if (i == L->lengh)
	{
		L->data[i - 1] = 0;
		L->lengh -= 1;
		return OK;
	}

	int j;
	for (j = i;j <= L->lengh;j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->lengh -= 1;

	return OK;
}
