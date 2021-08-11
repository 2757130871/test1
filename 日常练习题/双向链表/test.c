#include "DList.h"

void test1()
{
	Node* list = NULL;

	DListInit(&list);

	DListPushFront(list, 1);
	DListPushFront(list, 2);
	DListPushFront(list, 3);
	DListPushFront(list, 4);
	DListPushBack(list, 5);
	DListPushBack(list, 4);
	DListPushBack(list, 3);
	DListPushBack(list, 2);
	DListPushBack(list, 1);

	DListPrint(list);

	int n1, n2, n3, n4, n5, n6,
		n7, n8, n9, n10, n11, n12;

	DListPopBack(list, &n1);
	DListPopBack(list, &n2);
	DListPopBack(list, &n3);
	DListPopBack(list, &n4);
	DListPopBack(list, &n5);
	DListPopFront(list, &n6);
	DListPopFront(list, &n7);
	DListPopFront(list, &n8);
	DListPopFront(list, &n9);
	DListPopFront(list, &n10);


	DListPrint(list);

	DListDestroy(list);
}

int main()
{
	test1();

	return 0;
}
