
//¼ò¼òµ¥µ¥Ò»Íë·¹

int fib(int n) {

	if (n == 0)	return 0;
	if (n <= 2) return 1;

	int a = 1;
	int b = 1;
	int c = 1;

	while (n - 2)
	{
		c = (a % 1000000007 + b % 1000000007);
		a = b;
		b = c;

		n--;
	}

	return c % 1000000007;
}