#define _CRT_SECURE_NO_WARNINGS 1
//2020年品茗经典C++笔试题
//（交换两个整形变量）

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;//相当于空瓶
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;//1
//	a = b;//2
//	b = c;//3
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

////如果不能有第三个变量
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}//这种方法只能解决数字较小的问题，不能解决数字较大的问题。
////存在整形溢出的问题。int--4个字节--32bit位--整形有最大值

//下面改进
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}//不会溢出的！，没有使用第三个变量！
//结束