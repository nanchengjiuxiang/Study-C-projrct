#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	////printf()的作用是将参数文本输出到屏幕。它名字里面的 f 代表 format(格式化), 表示可以定制输出文本的格式。
	//printf("hello world\n");

	//printf("%d\n", 123);

	//printf("%5d\n", 123);  //%5d表示这个占位符的宽度至少为5位，如果不满5位,对应的值的前面会添加空格。
	//printf("%5d\n", 123456);  

	////输出的值默认是右对齐, 即输出内容前面会有空格;如果希望改成左对齐, 在输出内容后面添加空格, 可以在占位符的 % 的后面插入一个 - 号。
	//printf("%-d\n", 123);  //输出的123后面，用空格补齐5位


	//printf("%f\n", 12.34);  //%f在打印小数时，默认小数点后 6 位
	//printf("%12f\n", 12.34);

	//printf("%+d\n", 10);  //打印数字时总是打印 + - 号
	//printf("%-d\n", -10);

	////限制小数位数
	//printf("%.2f\n", 123.4);
	//printf("%.2f\n", 123.455);  //结果为123.46，会有四舍五入
	//printf("%10.2f\n", 123.455);  //%10.2f 表示数字总共10位（含小数点），且小数点后保留 2 位小数
	//printf("%-10.2f\n", 123.455);  //左对齐

	//printf("%*.*f\n", 6, 2, 123.455);  //以参数的方式传递


	////输出部分字符串
	//printf("%.5s\n", "hello world");  //输出5个字符串





	/*scanf()处理用户输入的原理是, 用户的输入先放入缓存, 等到按下回车键后, 按照占位符对缓存进行解读。
		解读用户输入时, 会从上一次解读遗留的第一个字符开始, 直到读完缓存, 或者遇到第一个不符合条件的字符为止。*/

	//int score = 0;
	//printf("输入成绩：");
	//scanf("%d", &score);  //& --> 取地址操作符， 获取score的地址
	//printf("成绩是：%d\n", score);


	////scanf()处理数值占位符时,会自动过滤空白字符,包括空格、制表符、换行符等。
	//int i, j;
	//float x, y;
	//scanf("%d%d%f%f", &i, &j, &x, &y);
	//printf("%d\n%d\n%.2f\n%.2f\n", i, j, x, y);


	//int m = 0;
	//float n = 0.0;

	////输入     -13.45e12# 0
	//scanf("%d", &m);
	//printf("%d\n", m);

	//scanf("%f", &n);
	//printf("%f\n", n);



//scanf()的返回值是一个整数
//1. 如果没有读取任何项, 或者匹配失败, 则返回0
//2. 如果在成功读取任何数据之前, 发生了读取错误或者遇到读取到文件结尾, 则返回常量EOF(-1)。
//3. EOF - end of file 文件结束标志表示成功读取的变量个数。

	//int a = 0;
	//int b = 0; 
	//float c = 0.0;

	//int r = scanf("%d %d %f", &a, &b, &c);  //r 为scanf的返回值，即输入的数据数量（int）

	//printf("r = %d\n", r);
	//printf("a = %d  b = %d  c = %f\n", a, b, c);

	/*int num1 = 0;
	int num2 = 0;

	while (scanf("%d %d", &num1, &num2) != EOF)
	{
		printf("%d\n", num1 + num2);
	}*/


	//char arr[10];
	//scanf("%[a-zA-z]", arr);  //读取只包含字母的字符串
	//printf("%s\n", arr);


	char c = 0;
	//scanf("%c", &c);
	//printf("---%c---\n", c);

	scanf(" %c", &c);  //%c前面的空格表示忽略开始的字符
	printf("---%c---\n", c);

	char arr[10];  //字符串末尾有一个\0,所以这个字符串最多能存储9个字符
	scanf("%9s", arr);  //%9s表示scanf只读取9个字符，字符串的最大长度为9，后面的内容将会丢弃
	printf("%s", arr);


	return 0;
}