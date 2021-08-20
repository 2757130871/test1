//从后向前拷贝。
//先计算出空格的个数，得出替换完毕的字符串的大小，从而定位替换后的字符串最后一个字符的下标。实现原地替换。


char* replaceSpace(char* s) {

	if (!s) return NULL;

	int len = strlen(s);
	int cntSp = 0;

	char* tmp = s;

    //求出空格个数
	while (*tmp)
	{
		if (*tmp == ' ')
			cntSp++;
		tmp++;
	}
    
    char* newArr = (char*)malloc(len + 2* cntSp + 1);

    int newTail = len + 2* cntSp;

    int i;
    for(i = len;i>=0;i--)
    {
        if(s[i] == ' ')
        {  
            newArr[newTail--] = '0';
            newArr[newTail--] = '2';
            newArr[newTail--] = '%';
        }
        else
        {
            newArr[newTail--] = s[i];
        }
    }
    
    return newArr;
}
