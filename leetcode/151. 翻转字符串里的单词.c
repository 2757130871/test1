

//从后往前查找
//

char* reverseWords(char* s)
{
	int len = strlen(s);
	char* newArr = (char*)malloc(sizeof(char) * len + 1);

	int prev = len - 1; //每个单词的头 
	int tail = len - 1; //每个单词的尾
	int cur = 0; //
	int index = 0; //新数组的索引

	while (prev >= 0)
	{
		if (prev >= 0 && s[prev] == ' ')
		{
			prev--;
		}
		else
		{
			tail = prev;
			while (prev >= 0 && s[prev] != ' ')
			{
				prev--;
			}

			cur = prev + 1;
			while (cur <= tail)
			{
				newArr[index++] = s[cur++];
			}

			newArr[index++] = ' '; //每个单词后添加' '
		}

	}

	if (index > 0 && newArr[index - 1] == ' ')
	{
		newArr[index - 1] = 0;
	}
	else
	{
		newArr[index] = 0;
	}

	return newArr;
}


