
char* my_strncpy(char* dest, const char* src, size_t sz)
{
	assert(dest && src);
	if (sz == 0) return dest;
		

	char* ret = dest;

	while (*src != '\0' && sz-- != 0)
	{
		*dest++ = *src++;
	}


	if (*dest != '\0')
		*dest = '\0';
	return ret;
}




int main()
{
	char dest[22] = "1234567";
	char src[22] = "89abcd";
	//my_strncat(dest, src, 6);

	my_strncpy(dest, src, 0);

	printf(dest);
	return 0;
}
