#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAXSIZE 20
#define  OK  1
#define  ERROR  -1

typedef int ElemType;
typedef int Status;

typedef struct
{
	ElemType data[MAXSIZE];
	int top;
}SqStack;


//Init ��ջ��������Ϊ0��top��Ϊ-1
Status InitSqStack(SqStack* S);

//Print
Status PrintSqStack(SqStack* S);

//Push
Status PushSqStack(SqStack* S, int data);

//Pop
Status PopSqStack(SqStack* S);

