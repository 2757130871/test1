#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"



//����һ��������
void CreateTree(treeNode** T)
{
	ElemType ch;
	ch = scanf("%c", &ch);

	if (ch == '#')
	{
		*T = NULL;
	}
	else
	{
		*T = (treeNode*)malloc(sizeof(treeNode));
		if (*T == NULL)
		{
			printf("memory over flow");
			return;
		}

		(*T)->data = ch;
		CreateTree(&(*T)->left);
		CreateTree(&(*T)->right);
	}
}

//ǰ��
void PreOrder(treeNode* T)
{
	if (T == NULL)
		return;
	printf("%c", T->data);
	PreOrder(T->left);
	PreOrder(T->right);
}

//����
void InOrder(treeNode* T)
{
	if (T == NULL)
		return;
	InOrder(T->left);
	printf("%c", T->data);
	InOrder(T->right);
}

//����
void PostOrder(treeNode* T)
{
	if (T == NULL)
		return;
	PostOrder(T->left);
	PostOrder(T->right);
	printf("%c", T->data);
}


