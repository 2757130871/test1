#include "DoubleList.h"

void test1()
{
	Node* list = (Node*)malloc(sizeof(Node));
	DListInit(list);

	//插入节点测试
	DListPushBack(list, 1);
	DListPushBack(list, 2);
	DListPushBack(list, 3);

	DListPushFront(list, 1);
	DListPushFront(list, 2);
	DListPushFront(list, 3);

	ListPrevPrint(list);
	ListRearPrint(list);

	//删除节点测试
	DataType a1 = DListPopBack(list);
	DataType a2 = DListPopBack(list);
	DataType a3 = DListPopBack(list);

	DataType b1 = DListPopFront(list);
	DataType b2 = DListPopFront(list);
	DataType b3 = DListPopFront(list);
	DataType b4 = DListPopFront(list);

	ListPrevPrint(list);

	//销毁
	DListDestroy(list);
	free(list);
	list = NULL;
}

int main()
{
	test1();

	return 0;
}
