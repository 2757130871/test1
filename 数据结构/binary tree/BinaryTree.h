#pragma once 
#include <stdio.h>

typedef char ElemType;

typedef struct treeNode
{
	char data;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;


//创建一个二叉树
void CreateTree(treeNode** T);

//前序遍历
void PreOrder(treeNode* T);

//中序遍历
void InOrder(treeNode* T);

//后序遍历
void PostOrder(treeNode* T);
