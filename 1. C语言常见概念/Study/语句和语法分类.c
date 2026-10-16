//C语言的代码是由一条一条的语句构成的, C语言中的语句可为以下五类:
//· 空语句
//· 表达式语句
//· 函数调用语句
//· 复合语句
//· 控制语句

//控制语句用于控制程序的执行流程, 以实现程序的各种结构方式(C语言支持三种结构:顺序结构、选择结构、循环结构),
// 它们由特定的语句定义符组成, C语言有九种控制语句。可分成以下三类 :
//1. 条件判断语句也叫分支语句 : if语句、switch语句；
//2. 循环执行语句:do while语句、while语句、for语句;
//3. 转向语句:break语句、goto语句、continue语句、return语句。


#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	;   //空语句

	int a = 1;
	int b = 3;
	int sum = a + b;   //表达式语句

	int ret = add(a, b);   //函数调用语句

	int ans = 0;
	for (int i = 0; i <= 10; i++)   //for循环内的代码块为复合语句
	{
		ans++;
		printf("%d", ans);
	}


	return 0;
}