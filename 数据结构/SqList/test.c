#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

int main()
{
	SqList  s1;
	//��ʼ��
	InitSqList(&s1);

	//��������
	SqListInsert(&s1, 1, 1);
	SqListInsert(&s1, 2, 3);
	SqListInsert(&s1, 3, 5);
	SqListInsert(&s1, 4, 7);

	PrintSqList(&s1);

	//�м����
	//SqListInsert(&s1, 2, 2);

	//β��ɾ��
	SqListDelete(&s1, 10);
	PrintSqList(&s1);
	//�м�ɾ��
	SqListDelete(&s1, 1);
	PrintSqList(&s1);
	//��ӡ˳���
	PrintSqList(&s1);

	return 0;
}