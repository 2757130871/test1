void reverse(char* start, char* end)
{
	char* left = start;
	char* right = end;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}

}
//第一步：逆序前n个字符，
//第二步：逆序后面字符串长度-n个字符
//第三步：最后逆序整个字符串
//三步逆序得到最后完整字符。
char* reverseLeftWords(char* s, int n)
{
	
	if (s == NULL)   return NULL;

	int len = strlen(s);
	n %= len; //题目条件给定n小于长度，可以不写这句
		
	reverse(s, s + n - 1);
	reverse(s + n, s + len - 1);
	reverse(s, s + len - 1);

	return s;
}