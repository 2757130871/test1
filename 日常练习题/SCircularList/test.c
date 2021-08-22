#include "SCircularList.h"


void test1()
{

	int  t1;

	Node head;
	SListInit(&head);

	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushFront(&head, 1);
	SListPushFront(&head, 2);
	SListPushFront(&head, 3);

	SListPrint(&head);

	/*int i1 = SListPopFront(&head);
	SListPrint(&head);
	int i2 = SListPopFront(&head);
	SListPrint(&head);
	int i3 = SListPopFront(&head);
	SListPrint(&head);
	int i11 = SListPopFront(&head);
	SListPrint(&head);
	int i12= SListPopFront(&head);
	SListPrint(&head);
	int i13= SListPopFront(&head);
	SListPrint(&head);
	int i14 = SListPopFront(&head);
	SListPrint(&head);*/


	int i4 = SListPopFront(&head);
	SListPrint(&head);
	int i5 = SListPopFront(&head);
	SListPrint(&head);
	int i6 = SListPopFront(&head);
	SListPrint(&head);
	int i7 = SListPopFront(&head);
	SListPrint(&head);
	int i8 = SListPopFront(&head);
	SListPrint(&head);
	int i9 = SListPopFront(&head);
	SListPrint(&head);
	int i10 = SListPopFront(&head);


	SListDestroy(&head);
}

int main()
{
	test1();


	return 0;
}
