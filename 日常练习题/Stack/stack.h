#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>


//-------��̬�汾-----------
//#define MAX 10
//typedef int DataType;
//typedef struct Stack
//{
//	DataType  data[MAX];
//	DataType top; //ջ��
//
//}Stack;



//--------��̬�汾--------
#define INCREMENT 2 

typedef int DataType;

typedef struct Stack
{
	DataType* s;
	int top;
	int capacity;
}stack;


//----�ӿ�----

//��ʼ��ջ
void StackInit(stack* stk);
//����ջ
void DestroyStack(stack* stk);
//ѹջ
void StackPush(stack* stk,DataType val);
//��ջ
void StackPop(stack* stk, DataType* val);
//ջΪ�շ���true
bool StackIsEmpty(stack* stk);
//����ջ��Ԫ�ظ���
int StackSize(stack* stk);
//����ջ��Ԫ��
DataType StackTop(stack* stk);
//��ջ�׿�ʼ��ӡԪ��
void StackPrint(stack* stk);




