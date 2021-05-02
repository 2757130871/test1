#define _CRT_SECURE_NO_WARNINGS 1

#include "SqList.h"


//��ӡ˳���

Status PrintSqList(SqList* L)
{
	if (L->lengh == 0)
	{
		printf("˳���Ϊ��");
		return ERROR;
	}

	int i;
	for (i = 0;i < L->lengh;i++)
	{
		printf("%d ", L->data[i]);
	}
	return OK;
}

//��ʼ��˳��� ��˳�������Ԫ�غͳ�����Ϊ0
Status InitSqList(SqList* L)
{
	int i;
	for (i = 0;i < MAXSIZE;i++)
	{
		L->data[i] = 0;
	}

	L->lengh = 0;
	return OK;
}

//��ò���
Status GetElem(SqList* L, int i, int* e)
{
	if (L->lengh == 0 || i < 1 || i > L->lengh)
	{
		return ERROR;
	}

	*e = L->data[i - 1];

	return OK;
}

//��������
//1. ˳�������
//2. �����λ����Ч
//3. ����β������
Status SqListInsert(SqList* L, int i, int e)
{
	if (L->lengh == MAXSIZE)
	{
		printf("˳�������");
		return ERROR;
	}

	if (i < 1 || i > L->lengh + 1) //ֻ�������������ݺ����
	{
		return ERROR;
	}

	if (i <= L->lengh)  //�����ݼ������Ҫ������λ�ú������ȫ������ƶ�һλ
	{
		int j;
		for (j = L->lengh;j >= i;j--)
		{
			L->data[j] = L->data[j - 1];
		}
	}

	L->data[i - 1] = e;
	L->lengh++;

	return OK;
}


//ɾ������
//1. ��ǰ˳���Ϊ�ջ���ɾ��λ����Ч
//2. β��ɾ��
//3. �����м�ɾ��

Status SqListDelete(SqList* L, int i)
{
	if (L->lengh == 0 )
	{
		printf("˳���Ϊ�գ��޷�ɾ����");
		return ERROR;
	}

	if (i < 1 || i > L->lengh)
	{
		printf("ɾ��ʧ��");
		return ERROR;
	}

	if (i == L->lengh)
	{
		L->data[i - 1] = 0;
		L->lengh -= 1;
		return OK;
	}

	int j;
	for (j = i;j <= L->lengh;j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->lengh -= 1;

	return OK;
}
