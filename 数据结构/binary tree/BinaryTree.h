#pragma once 
#include <stdio.h>

typedef char ElemType;

typedef struct treeNode
{
	char data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;


//����һ��������
void CreateTree(treeNode** T);

//ǰ�����
void PreOrder(treeNode* T);

//�������
void InOrder(treeNode* T);

//�������
void PostOrder(treeNode* T);
