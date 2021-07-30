#include "SList.h"

int main()
{

	SList list;
	SListInit(&list);

	SListPushFront(&list, 1);
	SListPushFront(&list, 2);
	SListPushFront(&list, 3);
	SListPushFront(&list, 12);
	SListPushFront(&list, 4);
	SListPrint(list.head);


		

	Node* node = SListFind(&list, 1);

	SListEraseAfter(&list, node);

	SListPrint(list.head);

	return 0;
}

