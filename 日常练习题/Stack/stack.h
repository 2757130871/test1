#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>


//-------静态版本-----------
//#define MAX 10
//typedef int DataType;
//typedef struct Stack
//{
//	DataType  data[MAX];
//	DataType top; //栈顶
//
//}Stack;



//--------动态版本--------
#define INCREMENT 2 

typedef int DataType;

typedef struct Stack
{
	DataType* s;
	int top;
	int capacity;
}stack;


//----接口----

//初始化栈
void StackInit(stack* stk);
//销毁栈
void DestroyStack(stack* stk);
//压栈
void StackPush(stack* stk,DataType val);
//弹栈
void StackPop(stack* stk, DataType* val);
//栈为空返回true
bool StackIsEmpty(stack* stk);
//返回栈内元素个数
int StackSize(stack* stk);
//返回栈顶元素
DataType StackTop(stack* stk);
//从栈底开始打印元素
void StackPrint(stack* stk);




