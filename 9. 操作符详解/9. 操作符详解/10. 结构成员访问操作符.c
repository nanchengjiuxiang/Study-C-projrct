#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student
{
	char name[100];
	int age;
	float score;
	float height;
} s8, s9; //创建结构体变量（全局变量）--> 可以不写

struct Book
{
	char name[100];
	float price;
};

struct Test
{
	int n;
	char c;
	struct Student s;
	double d;
};


//全局变量
struct Student s7;
struct Student s6;

int main()
{
	//结构体创建（局部变量）
	struct Student s1;
	//结构体中的变量初始化
	struct Student s3 = { "lisi", 18, 85.5f, 180 };
	struct Student s4 = { .name = "zhangsan", .score = 90.5f, .height = 185, .age = 18};

	struct Test t = { 100, 'A', { "wangwu", 19, 95.5f, 180 }, 13.5 };
	

	//打印结构体数据
	printf("name = %s, age = %d, score = %d\n", s3.name, s3.age, s3.score);
	printf("n = %d, c = %c, name = %s, height = %lf\n", t.n, t.c, t.s.name, t.s.height);

	return 0;
}