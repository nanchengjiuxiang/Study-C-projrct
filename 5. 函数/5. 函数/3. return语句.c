#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//在函数的设计中, 函数中经常会出现return语句, 这里讲一下return语句使用的注意事项。
//1. return后边可以是一个数值, 也可以是一个表达式 / 如果是表达式则先执行表达式, 再返回表达式的结果。
//2. return后边也可以什么都没有, 直接写return;这种写法适合函数返回类型是void的情况。
//3. return语句执行后, 函数就彻底返回, 后边的代码不再执行。
//4. return返回的值和函数返回类型不一致, 系统会自动将返回的值隐式转换为函数的返回类型。
//5. 如果函数中存在if等分支的语句, 则要保证每种情况下都有return返回, 否则会出现编译错误。
//6. 函数的返回类型如果不写, 编译器会默认函数的返回类型是int。
//7. 函数写了返回类型, 但是函数中没有使用return返回值, 那么函数的返回值是未知的。


int is_leap_year(int year)
{
	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;

	printf("输入年份：");
	scanf("%d", &year);

	if (is_leap_year(year))
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", year);

	return 0;
}

//main函数确实有能力接收参数的,参数也是有意义的,也能使用
//int main(int argc, char* argv[])
//{
//	return 0;
//}