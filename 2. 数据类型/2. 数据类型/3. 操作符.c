#include <stdio.h>

int main()
{
	//printf("%d\n", 4 + 5);

	//int a = 10;
	//int b = 20;
	//printf("%d\n", a + b);
	//printf("%d\n", a * b);
	//printf("%d\n", b / a);

	//printf("%d\n", a / 4);
	//printf("%f.2f\n", a / 4.0);


	//// 运算符%表示求模(余)运算,即返回两个整数相除的余值。这个运算符只能用于整数,不能用于浮点数。
	//printf("%d\n", a % 4);

	//// % ---> 可以用于求一个整数的最后一位
	//int num = 255;
	//printf("%d\n", num % 10); // 255最后一位为 5 

	//// 负数求模的规则是,结果的正负号由第一个运算数的正负号决定。
	//printf("%d\n", -12 % 10);
	//printf("%d\n", -12 % -10);
	//printf("%d\n", 12 % -10);



	//int n = 10; // 初始化
	//n = 20; // 赋值

	//n = a = b + 50; // 连续赋值,从右向左依次赋值的。




	//// 复合赋值
	//int num1 = 10;
	//
	//num1 += 3; // num1自增3
	//printf("%d\n", num1);

	//num1 -= 3; // num1自减3
	//printf("%d\n", num1);

	//num1 /= 3; 
	//printf("%d\n", num1);

	//num1 *= 3; 
	//printf("%d\n", num1);

	//num1 %= 3; 
	//printf("%d\n", num1);




	//单目操作符 ++， --， + -

	////前置++
	//int num2 = 10;
	//int num3 = ++num2;   //先+1，后赋值
	//printf("num3 = %d, num2 = %d\n", num3, num2);

	////后置++
	//int num4 = 10;
	//int num5 = num4++;   //先赋值，后+1
	//printf("num5 = %d, num4 = %d", num5, num4);




	//强制类型转化
	int num_a = 3.14;
	int num_b = (int)num_a;
	int num_c = (int)3.14;
	printf("%d\n", num_c);
	printf("%d", num_a);

	return 0;
}