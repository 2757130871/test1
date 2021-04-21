
//递归实现string_reverse
int reverse2(char* str)
{
	char tmp = *str; //第一步：记录
	int len = strlen(str);
	*str = *(str + len - 1);//第二步：交换
	*(str + len - 1) = 0;//第三步：将每次的最后一个元素置位0

	if (strlen(str + 1) >= 2) //如果小于等于2就不需要置换
	{
		reverse2(str + 1);
	}

	*(str + len - 1) = tmp; //最后再置换
}