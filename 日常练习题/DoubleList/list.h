#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ListDataType;

//带头双向循环链表
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* rear;
	ListDataType val;
}Node;


//----接口----

//初始化链表
void ListInit(Node** phead);
//返回一个新节点
Node* BuyNode();
//销毁链表
void DestroyList(Node* phead);
//尾插
void ListPushBack(Node* phead, ListDataType val);
//头插
void ListPushFront(Node* phead, ListDataType val);
//尾删
void ListPopBack(Node* phead);
//头删
void ListPopFront(Node* phead);
//打印链表
void ListPrint(Node* phead);
//返回查找节点
void ListSearch(Node* phead, ListDataType val);
//返回搜索节点
Node* ListFind(Node* phead, ListDataType val);
//在指定结点前插入新节点
void ListInsert(Node* phead, Node* node, ListDataType val);
//删除指定节点
void ListErase(Node* phead, Node* node);


