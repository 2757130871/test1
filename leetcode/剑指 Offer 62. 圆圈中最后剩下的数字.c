
//����Լɪ������
//����
//������������ʼ�ջ���
//�����һ�ֽ���ʱ�����������˵�����ʼ��Ϊ0 index1 = 0
//ʣ�������˵�ʱ����������Ϊindex2 = (index1 + m) % 2
//ʣ�������˵�ʱ����������Ϊ(index2 + m) % 3
//.....

int lastRemaining(int n, int m) {

	int alive = 0;

	int i;
	for (i = 2;i <= n;i++)
	{
		alive = (alive + m) % i;
	}

	return alive;
}
