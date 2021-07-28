#include "SqList.h"

int main()
{
	//Init

	SqList list;
	SqListInit(&list);

	/*SqListPushFront(&list, 1);
	SqListPushFront(&list, 2);
	SqListPushFront(&list, 3);
	SqListPushFront(&list, 4);
	SqListPushBack(&list, 1);
	SqListPushBack(&list, 2);
	SqListPushBack(&list, 3);
	SqListPushBack(&list, 4);
	SqListPushBack(&list, 5);*/
	//SqListPushFront(&list, -3);

	
	/*SqListPrint(&list);
	printf("-------------\n");
	int n1, n2, n3;
	SqListPopBack(&list, &n1);
	SqListPopBack(&list, &n2);
	SqListPopBack(&list, &n3);

	int z1, z2, z3, z4;
	SqListPopFront(&list, &z1);
	SqListPopFront(&list, &z2);
	SqListPopFront(&list, &z3);
	SqListPopFront(&list, &z4);*/

	//SqListPrint(&list);

	
	SqListPushBack(&list, 1);
	SqListPushBack(&list, 2);
	SqListPushBack(&list, 3);

	SqListPrint(&list);
	printf("-------------\n");
	int s1, s2, s3, s4;
	SqListErase(&list, 0, &s1);
	SqListPrint(&list);
	printf("-------------\n");
	SqListErase(&list, 0, &s2);
	SqListPrint(&list);
	printf("-------------\n");
	SqListErase(&list, 0, &s3);
	SqListPrint(&list);
	printf("-------------\n");
	SqListErase(&list, 0, &s4);
	SqListPrint(&list);
	printf("-------------\n");

	SqListDestroy(list.data);
	return;
}
