
int strStr(char* haystack, char* needle) {


	char* s1 = haystack;
	char* s2 = needle;

	// abcddde
	// de
	int ret = 0;
	while (*s1)
	{
		//副本
		char ss1 = s1;
		char ss2 = s2;

		if (*s1 == *s2)
		{
			while (*s2 && *s1 && *s1 == *s2)
			{
				s1++;
				s2++;
			}

			if (*s2 == '\0')
				return ret;
		}

		s1 = ss1 + 1;
		s2 = ss2;
		ret++;
	}

	return -1;
}
