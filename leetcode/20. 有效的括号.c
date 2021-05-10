
char Pair(char c)
{
	if (c == '}')    return '{';
	if (c == ']')    return '[';
	if (c == ')')    return '(';
	return '0';
}

//利用栈来解决
bool isValid(char* s) {

	if (!s) return false;

	int len = strlen(s);
	if (len % 2 == 1)	return false; //如果长度为奇数，说明不是闭合，直接返回。

	int stk[len + 1], top = -1; //创建一个栈

	int i;
	for (i = 0;i < len;i++)
	{
		char c = s[i];
		if (c == '{' || c == '[' || c == '(')
		{
			stk[++top] = c; 
		}
		else
		{
			if (top == -1)	return false; //一开始就为右括号的情况。
			if (stk[top] != Pair(c))	return false; //不匹配的情况。
			top--;
		}

	}

	if (top == -1)	return true; //考虑 (()的情况
	return false;
}
