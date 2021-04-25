
//经典约瑟夫环问题
//逆推
//最后活下来的人始终活着
//当最后一轮结束时，活下来的人的坐标始终为0 index1 = 0
//剩下两个人的时候存货者坐标为index2 = (index1 + m) % 2
//剩下三个人的时候存货者坐标为(index2 + m) % 3
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
