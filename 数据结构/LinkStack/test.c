#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkStack.h"


int main()
{
	struct LinkStack* L1 = CreateLinkStack();

	//Init
	InitLinkStack(L1);

	//Push
	PushLinkStack(L1, 1);
	PushLinkStack(L1, 2);
	PushLinkStack(L1, 3);
	PushLinkStack(L1, 4);

	//Print
 	PrintLinkStack(L1);

	printf("\n");

	//Pop
	int e;
	PopLinkStack(L1, &e);
	PopLinkStack(L1, &e);
	PopLinkStack(L1, &e);
	PopLinkStack(L1, &e);

	//Print
	PrintLinkStack(L1);

	return 0;
}

