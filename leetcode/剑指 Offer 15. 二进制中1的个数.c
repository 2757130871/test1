//方法1：让n的二进制每一位和1进行与运算，
//如果为1就让计数器增加
int hammingWeight(unsigned int n) {

	unsigned int flag = 1;
	int count = 0;
	while (flag)
	{
		if (n & flag)
		{
			count++;
		}
		flag <<= 1;
	}
	return count;
}


//方法2：
//让一个非0的数和这个数-1进行&运算，就会让这个数的二进制位少一个1、
// 1100 & 1011 = 1000 
//利用这个规律解决

int hammingWeight(uint32_t n) {

    int count = 0;
    while(n)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}
