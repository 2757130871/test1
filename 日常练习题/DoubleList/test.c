#include "list.h"

void test1()
{
	Node* list;
	ListInit(&list);

	ListPushBack(list, 1);
	ListPushBack(list, 2);
	ListPushBack(list, 3);
	ListPushBack(list, 4);
	ListPushBack(list, 5);
	ListPushBack(list, 6);
	ListPushBack(list, 7);
	ListPushBack(list, 8);

	ListPrint(list);
	printf("\n-------------------\n");

	Node* node = ListFind(list, 5);
	ListInsert(list, node, 10);

	ListPrint(list);
	printf("\n-------------------\n");


	//DestroyList(list);
	//ListPopFront(list);
	//ListPopBack(list);
	//ListPopBack(list);
	//ListPopBack(list);
	//ListPopBack(list);
	//ListPopFront(list);
	//ListPopFront(list);
	//ListPopFront(list);


}

int main()
{
	test1();

	return 0;
}