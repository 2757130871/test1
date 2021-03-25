#include <stdio.h>

#define OFFSETOF(a,b)  (int)&(((a*)0)->b)

int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i1));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}