#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int DataType;

typedef struct SNode
{
	struct SNode* next;
	DataType data;
}SNode;

/// <summary>
/// 链栈的需要栈顶指针，链表需要头指针
/// 可以将其合二为一
/// </summary>
typedef struct LStack
{
	SNode* top;
	int count;
}LStack;


void LStackInit(LStack* stk);
void LStackDestroy(LStack* stk);
SNode* BuyNode(DataType val);

void LStackPush(LStack* stk,DataType val);
void LStackPop(LStack* stk);

DataType LStackTop(LStack* stk);

bool IsEmpty(LStack* stk);
