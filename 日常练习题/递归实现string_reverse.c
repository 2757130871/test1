
//�ݹ�ʵ��string_reverse
int reverse2(char* str)
{
	char tmp = *str; //��һ������¼
	int len = strlen(str);
	*str = *(str + len - 1);//�ڶ���������
	*(str + len - 1) = 0;//����������ÿ�ε����һ��Ԫ����λ0

	if (strlen(str + 1) >= 2) //���С�ڵ���2�Ͳ���Ҫ�û�
	{
		reverse2(str + 1);
	}

	*(str + len - 1) = tmp; //������û�
}