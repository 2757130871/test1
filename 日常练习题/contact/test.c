#include "contact.h"

enum option
{
	EXIT,
	ADD,
	DELETE,
	MODIFY,
	SEARCH,
	PRINT,
	SORT
};

void menu()
{
	printf("-------0.exit-----------------\n");
	printf("-------1.add-----------------\n");
	printf("-------2.delete--------------\n");
	printf("-------3.modify--------------\n");
	printf("-------4.search--------------\n");
	printf("-------5.print---------------\n");
	printf("-------6.sort--------- -------\n");
}

int main()
{
	int input;
	contact con;
	InitContact(&con);

	do
	{
		menu();

		printf("请输入:>");
		scanf_s("%d", &input);

		switch (input)
		{
		case EXIT:
			printf("已退出");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case SORT:

			break;
		default:
			printf("输入有误，重新输入");
			break;
		}

	} while (input);

	return 0;
}
