#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 sizeof(a)计算的是数组的大小（单位字节）
	//printf("%d\n", sizeof(a+0));// 4/8 a是首元素的地址，a+0还是首元素地址 
	//printf("%d\n", sizeof(*a));// 4 计算首元素的大小 首元素是一个int 所以是4
	//printf("%d\n", sizeof(a[1]));// 4 计算第一个元素的大小 是int 所以是4
	//printf("%d\n", sizeof(&a));// 4/8 虽然是去地址整个数组，但是他还是一个地址
	//printf("%d\n", sizeof(*&a));// 16 &和*相互抵消了 相当于sizeof(a) 
	//printf("%d\n", sizeof(&a+1));//4/8 计算的是数组第二个元素的地址大小 还是看平台
	//printf("%d\n", sizeof(&a[0]));//4/8 
	//printf("%d\n", sizeof(&a[0]+1));//4/8


	//strlen()大小求常量字符串大小

	//char arr[] = "abcdef"; //字符串系统会在末尾自动加上\0 而字符数组不会
	//char arr2[] = { '1', '2', '\0' };

	//printf("%d\n", strlen(arr)); // 6 从首元素开始计数，不是\0就加1，直到遇到\0
	//printf("%d\n", strlen(arr + 0)); // 6 arr+0还是首个元素地址，和arr一样
	////printf("%d\n", strlen(*arr)); // error 访问了内存地址为97的空间，非法访问
	////printf("%d\n", strlen(arr[1])); // error 访问了内存地址为98的空间，非法访问
	//printf("%d\n", strlen(&arr)); // 6 也是从首元素地址开始计数 
	//printf("%d\n", strlen(&arr + 1)); // 随机值 &arr是整个数组地址 &arr+1代表跳过这个数组再开始计算长度，后面是什么不知道，所以是随机
	//printf("%d\n", strlen(&arr[0] + 1)); // 5

	//printf("%d", strlen(arr2)); 


	int a[3][4] = {0};
	
	printf("%d\n", sizeof(a)); //计算的是整个二维数组大小 48
	printf("%d\n", sizeof(a[0][0]));//计算第一个数组的第一个元素大小 int 4
	printf("%d\n", sizeof(a[0]));//a[0] 是二维数组的第一个数组名 单独放在sizeof里代表计算整个数组
	printf("%d\n", sizeof(a[0]+1));//a[0]是二维数组首个数组的首元素地址 +1代表第1个数组的第二个元素地址 4/8 
	printf("%d\n", sizeof(*(a[0]+1)));//计算 int 4
	printf("%d\n", sizeof(a+1));//a单独放在sizeof里代表的是整个二维数组地址，在这里二维数组的首元素是第一行，
	//把二维数组当成一维数组，每一个一维数组当成二维数组
	//的每一个元素，a+1跳过一个一维数组，所以a+1 是第二个数组的首地址。
	printf("%d\n", sizeof(*(a+1)));//相当于(a[1]),计算第二行的大小，单位字节。
	printf("%d\n", sizeof(&a[0]+1));//a[0]是第一行的第1元素地址，&[a0]代表整个第一个数组地址，所以&[a0]+1是第二行的地址。4
	printf("%d\n", sizeof(*(&a[0]+1))); //第二行的地址单独放在sizeof计算的是第二个数组的总大小。
	printf("%d\n", sizeof(*a));// 16 计算二维数组首个元素也就是第一行的大小
	printf("%d\n", sizeof(a[3]));// sizeof内部的表达式是不参与运算的，不会真的去访问内存，所以这里a[3]和a[0]的效果是一样的		





	return 0;
}