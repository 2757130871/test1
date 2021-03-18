char* my_strcpy(char* dest, const char* src)
{
	assert(*dest != NULL);
	assert(*src != NULL);
	
	char* res = dest;

	//拷贝src所指向空间的元素到dest指向的空间里，包含'\0'。
	while (*dest++ = *src++)
	{
		
	}
	
	//返回目的地初始空间。
	return res;
}
