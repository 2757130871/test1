#include  <stdio.h>

//
int main(void)
{
	int a = 5;
	int b = 3;

	a = a + b; 
	b = a - b;
	a = a - b;

	printf("%d", a);
	printf("%d", b);
	return 0;
}


//Ê¹ÓÃÒì»òµÄ·½Ê½¡£
//int main(void)
//{
//	int a = 5;
//	int b = 3;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d", a);
//	printf("%d", b);
//	return 0;
//}
