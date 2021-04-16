#include <string.h>
#include <stdio.h>


void isYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d", year);
	}
	else
	{
		printf("No");
	}
}



int main()
{

	int year = 0;
	scanf_s("%d", &year);

	isYear(year);





	return 0;
}