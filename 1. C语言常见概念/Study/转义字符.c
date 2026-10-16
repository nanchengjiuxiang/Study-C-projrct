//·\ ? : 在书写连续多个问号时使用, 防止他们被解析成三字母词, 在新的编译器上没法验证了。
//·\':用于表示字符常量
//·\":用于表示一个字符串内部的双引号
//·\\:用于表示一个反斜杠, 防止它被解释为一个转义序列符。
//·\a : 警报, 这会使得终端发出警报声或出现闪烁, 或者两者同时发生。
//·\b : 退格键, 光标回退一个字符, 但不删除字符。
//·\f : 换页符, 光标移到下一页。在现代系统上, 这已经反映不出来了, 行为改成类似于\v。
//·\n: 換行符。
//·\r : 回车符, 光标移到同一行的开头。
//·\t : 制表符, 光标移到下一个水平制表位, 通常是下一个4 / 8的倍数。
//·\v : 垂直分隔符, 光标移到下一个垂直制表位, 通常是下一行的同一列。

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", "I\'m ok");
	printf("%s\n", "\"");
	printf("%s\n", "\\");
	printf("%s", "");
	printf("\a");
	printf("abcd\bef\bghi\n");
	printf("abc\ndef\n");
	printf("abc\rdef\n");
	printf("abc\tdef\th\tij\n");


	printf("%c\n", '\130');
	printf("%c\n", 'X');

	printf("%c\n", '0');
	printf("%c\n", '\x30');

	printf("%c", 'Q');
	printf("%c", '\x51');
	printf("%c", '\121');
	printf("%c\n", 81);


	printf("%d\n", 71);
	printf("%d\n", 071);



	//string length
	//strlen函数统计的是\0之前的字符数量
	int len = strlen("abc");   //len = 3
	printf("%d\n", len);

	int len2 = strlen("c:\test\16\test.c");   //len2 = 13
	printf("%d\n", len2);

	int len3 = strlen("c:\\test\\16\\test.c");   //len2 = 17
	printf("%d", len3);


	return 0; 
}