#include <stdio.h>

int main()
{

	//11111111 11111111 11111111 10000000
	//10000000 00000000 00000000 01111111
	//10000000 00000000 00000000 10000000

	char  a = -128;
	printf("%u\n", a); //4294967168

	//为什么是4294967168：

//思路

//-128转换为二进制
// 11111111 11111111 11111111 10000000 原码
// 10000000 00000000 00000000 01111111  反码
// 10000000 00000000 00000000 10000000	 补吗
//最后计算机内存储的是10000000
//要求打印\u 无符号int 先提升为int 符号位是1


// 11111111111111111111111110000000  因为要求打印无符号数字 所以直接转换为10进制
}