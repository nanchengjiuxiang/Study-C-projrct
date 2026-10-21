#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//伪随机数：每次生成的随机数都是一样的
	srand((unsigned int)time(NULL));  //给srand一个变化的值

	printf("打印一个随机数：%d\n", rand());
	printf("打印一个随机数：%d\n", rand());
	printf("打印一个随机数：%d\n", rand());
	printf("打印一个随机数：%d\n", rand());
	printf("打印一个随机数：%d\n", rand());


	/*time函数会返回当前的日历时间, 其实返回的是1970年1月1日0时0分0秒到现在程序运行时间之间的差值, 
	单位是秒。返回的类型是time_t类型的, time_t类型本质上其实就是32位或者64位的整型类型。

	time函数的参数 timer如果是非NULL的指针的话, 函数也会将这个返回的差值放在timer指向的内存中带回去。
	如果timer是NULL, 就只返回这个时间的差值。time函数返回的这个时间差也被叫做:时间戳。

	time函数的时候需要包含头文件 : time.h*/



	return 0;
}