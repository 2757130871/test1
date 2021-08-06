#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int ListDataType;

//��ͷ˫��ѭ������
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* rear;
	ListDataType val;
}Node;


//----�ӿ�----

//��ʼ������
void ListInit(Node** phead);
//����һ���½ڵ�
Node* BuyNode();
//��������
void DestroyList(Node* phead);
//β��
void ListPushBack(Node* phead, ListDataType val);
//ͷ��
void ListPushFront(Node* phead, ListDataType val);
//βɾ
void ListPopBack(Node* phead);
//ͷɾ
void ListPopFront(Node* phead);
//��ӡ����
void ListPrint(Node* phead);
//���ز��ҽڵ�
void ListSearch(Node* phead, ListDataType val);
//���������ڵ�
Node* ListFind(Node* phead, ListDataType val);
//��ָ�����ǰ�����½ڵ�
void ListInsert(Node* phead, Node* node, ListDataType val);
//ɾ��ָ���ڵ�
void ListErase(Node* phead, Node* node);


