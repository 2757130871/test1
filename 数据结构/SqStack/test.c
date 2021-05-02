#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "SqStack.h"

int main()
{
	SqStack s1;

	//Init
	InitSqStack(&s1);

	//Push
	PushSqStack(&s1, 1);
	PushSqStack(&s1, 2);
	PushSqStack(&s1, 3);
	PushSqStack(&s1, 4);

	//Print
	PrintSqStack(&s1);
	
	//Pop
	PopSqStack(&s1);
	PopSqStack(&s1);
	PopSqStack(&s1);
	PopSqStack(&s1);
	PopSqStack(&s1);

	//Print
	PrintSqStack(&s1);

	return 0;
}
