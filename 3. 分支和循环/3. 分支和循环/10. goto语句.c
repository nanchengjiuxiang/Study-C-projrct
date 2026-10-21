#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	//关机
	char scentens[20] = { 0 };  //字符数组
again:
	printf("电脑将于1分钟后关机，输入：取消；取消关机\n");
	system("shutdown -s -t 60");  //system()是用来执行系统命令
	scanf("%s", scentens);

	//两个字符串比较相等，使用strcmp函数
	if (strcmp(scentens, "取消") == 0)
	{
		system("shutdown -a");
		printf("关机已取消！\n");
	}
	else
	{
		goto again;
	}

	return 0;
}