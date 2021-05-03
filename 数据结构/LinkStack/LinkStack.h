#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define OK 1
#define ERROR -1

typedef int Status;
typedef int ElemType;

struct StackNode
{
	ElemType data;
	struct StackNode* next;
};

struct LinkStack
{
	struct StackNode* top;
	int count;
};



//Create LinkStack
struct LinkStack* CreateLinkStack();

//Init LinkStack
void InitLinkStack(struct LinkStack* L);

//Print LinkStack
void PrintLinkStack(struct LinkStack* L);

//Push
void PushLinkStack(struct LinkStack* L, int e);

//Pop
void PopLinkStack(struct LinkStack* L, int* e);


