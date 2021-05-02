#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAXSIZE 20
#define ERROR -1
#define OK 1

typedef int ElemType;
typedef int Status;

typedef struct
{
	ElemType data[MAXSIZE];
	int lengh;
}SqList;


//��ӡ˳���
Status PrintSqList(SqList* L);

//��ʼ��˳��� ����һ���յ�˳���
Status InitSqList(SqList* L);

//��õ�iλ�ϵĴ洢����
Status GetElem(SqList*, int i, int* e);

//���ݲ���
Status SqListInsert(SqList*, int i,int e);

//����ɾ��
Status SqListDelete(SqList*, int i);

