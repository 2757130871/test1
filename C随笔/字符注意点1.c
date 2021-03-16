#include <stdio.h>


int main()
{
	char arr[] = { 'a','b','c','d' }; //定义一个字符数组。
	char arr2[] = "abcd";


	printf("%d\n", strlen(arr));//arr后面没有手动添加\0，strlen函数会一直往后一个字节一个字节遍历下去直到遇见\0，计数器才停止记数。所以这里输出的是随机。
	printf("%d\n", strlen(arr));//”abcd“是一个常量字符串，系统在初始化的时候会自动加上\0，所以输出4。

	printf("%d\n", sizeof(arr));//sizeof()里单独放数组名，代表的是计算整个数组大小，arr里一共4个字符，所以输出4.

	printf("%d\n", sizeof(arr2)); //abcd后面还默认隐藏一个\0字符，所以输出5。


}
