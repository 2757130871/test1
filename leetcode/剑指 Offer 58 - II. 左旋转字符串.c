void reverse(char* start, char* end)
{
	char* left = start;
	char* right = end;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}

}
//��һ��������ǰn���ַ���
//�ڶ�������������ַ�������-n���ַ�
//��������������������ַ���
//��������õ���������ַ���
char* reverseLeftWords(char* s, int n)
{
	
	if (s == NULL)   return NULL;

	int len = strlen(s);
	n %= len; //��Ŀ��������nС�ڳ��ȣ����Բ�д���
		
	reverse(s, s + n - 1);
	reverse(s + n, s + len - 1);
	reverse(s, s + len - 1);

	return s;
}