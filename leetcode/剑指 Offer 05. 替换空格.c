

//����һ����СΪ3*s+1�Ŀռ䣬������sȫ�ǿո�
//Ҳ��������š�
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

    //��������\0
    *pstr = '\0';

    return str;

}