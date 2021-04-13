

//开辟一个大小为3*s+1的空间，在最坏情况s全是空格
//也能完整存放。
//
char* replaceSpace(char* s) {

    int len = strlen(s);
    char* str = (char*)malloc(3 * len + 1);

    char* ps = s;
    char* pstr = str;

    while (*ps != '\0')
    {
        if ((*ps) != ' ')
        {
            *pstr = *ps;

            pstr++;
            ps++;
        }
        else
        {
            *pstr = '%';
            pstr++;
            *pstr = '2';
            pstr++;
            *pstr = '0';
            pstr++;

            ps++;
        }

    }

    //最后添加上\0
    *pstr = '\0';

    return str;

}