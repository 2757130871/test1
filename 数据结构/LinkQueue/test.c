#include "LinkQueue.h"


int main()
{
	LinkQueue* L = CreateQueue();

	//Init
	InitQueue(L);

	//Enter
	EnQueue(L, 1);
	EnQueue(L, 2);
	EnQueue(L, 3);
	EnQueue(L, 4);

	//Print
 	//PrintQueue(L);
	
	//Delete
	int e;
	DeQueue(L,&e);
	DeQueue(L,&e);
	DeQueue(L,&e);
	DeQueue(L,&e);

	PrintQueue(L);


	return 0;
}

