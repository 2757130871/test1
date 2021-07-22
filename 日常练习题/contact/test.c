#include "contact.h"

#define ADD 1
#define DELETE 2
#define MODIFY 3
#define SEARCH 4
#define PRINT 5
#define SORT 6
#define EXIT 0

void menu()
{
	printf("-------0.exit-----------------\n");
	printf("-------1.add-----------------\n");
	printf("-------2.delete--------------\n");
	printf("-------3.modify--------------\n");
	printf("-------4.search--------------\n");
	printf("-------5.print---------------\n");
	printf("-------6.sort----------------\n");
}

int main()
{
	int input;
	do
	{
		menu();

		printf("请输入:>");
		scanf_s("%d",input);

		switch (input)
		{
		case EXIT:
			break;
		case ADD:
			break;
		case DELETE:
			break;
		case MODIFY:
			break;
		case SEARCH:
			break;
		case PRINT:
			break;
		default:
			printf("输入有误，重新输入");
			break;
		}

	} while (input);


	return 0;
}