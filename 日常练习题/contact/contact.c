#include "contact.h"


void InitContact(contact* con)
{
	con->sz = 0;
	memset(con->data, 0, sizeof(con->data));
}

void AddContact(contact* con)
{
	if (con->sz == MAX - 1)
	{
		printf("通讯录满了\n");
		return;
	}

	printf("请输入姓名:>");
	scanf_s("%s", con->data[con->sz].name, MAX_NAME);
	printf("请输入地址:>");
	scanf_s("%s", con->data[con->sz].addr, MAX_ADDR);
	printf("请输入电话号码:>");
	scanf_s("%s", con->data[con->sz].tele, MAX_TELE);

	con->sz++;
	printf("添加成功\n");
}

void DeleteContact(contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	printf("请输入待查找的姓名:>");
	char name[20];
	scanf_s("%s", &name, 20);

	int i;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(&name, &(con->data[i].name)) == 0)
		{
			int tmp = i;

			for (; tmp < con->sz - 1; tmp++)
			{
				strcpy(con->data[tmp].name, con->data[tmp + 1].name);
				strcpy(con->data[tmp].addr, con->data[tmp + 1].addr);
				strcpy(con->data[tmp].tele, con->data[tmp + 1].tele);
			}

			con->sz--;
			printf("删除成功！\n");
			return;
		}
	}

	printf("无此人\n");
}

void PrintContact(contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空！\n");
		return;
	}

	int i;
	for (i = 0; i < con->sz; i++)
	{
		printf("%5s  %10s  %11s\n",
			con->data[i].name,
			con->data[i].addr,
			con->data[i].tele);
	}

}

void SearchContact(contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入待查找的姓名:>");
	char name[20];
	scanf_s("%s", &name, 20);

	int i;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(&name, &(con->data[i].name)) == 0)
		{
			printf("找到了\n");
			return;
		}
	}

	printf("无此人\n");

}

void ModifyContact(contact* con)
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	char name[20];
	printf("请输入待修改的姓名:>");
	scanf_s("%s", name, 20);

	int i;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(name, con->data[i].name) == 0)
		{
			printf("请输入新姓名->");
			scanf_s("%s", con->data[i].name, MAX_NAME);
			printf("请输入新地址->");
			scanf_s("%s", con->data[i].addr, MAX_ADDR);
			printf("请输入新号码->");
			scanf_s("%s", con->data[i].tele, MAX_TELE);

			printf("修改成功！\n");
			return;
		}
	}

	return;
}
