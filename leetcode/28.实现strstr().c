#include <stdio.h>

int strStr(char* haystack, char* needle) {

    if (*haystack == '\0' && *needle == '\0')
        return 0;


    char* s1 = haystack;
    char* s2 = needle;

    char* cur = haystack;
    int count = 0;

    while (*cur)
    {
        s1 = cur;
        s2 = needle;

        while (*s1 && *s2 && *s1 == *s2)
        {
            s1++;
            s2++;
        }

        if (*s2 == '\0')
        {
            return count;
        }

        cur++;
        count++;
    }

    return -1;
}

int main()
{

	return;
}