#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////stdio.h 是一个头文件的名称
////std 标准 i intput o - output
////标准输入输出头文件
//
//int main()
//{
//	//实际运行的代码
//	//打印hello world
//	//打印函数 - printf - 库函数，库函数的使用得引用头文件的
//	//
//	printf("hello world");
//	return 0;
//}
//

#include <stdio.h>
//按F10

//
//main 是C语言程序的入口
//代码是从main函数的第一行开始执行的
//main函数有且仅有一个
// 
//C99 中引入的写法
//int main()
//{
//	return 0;
//}


//早期的写法

//void main()
//{
//
//}


//int main()
//{
//	printf("呵呵\n");
//	return 0;
//}


//ctrl + S - 保存
//
//
//int main()
//{
//	//printf - %d - 打印有符号数
//	//printf("%d\n", 100);
//
//	/*printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));*/
//
//	//int age = 20;//age 在内存上分配4个字节的空间
//	char ch = 'w';//ch 在内存中分配1个字节的空间
//
//	//钱 - 100 10000 10000000  100亿
//	//年龄 - 0~200
//	short age;
//	//类型  变量名 = 值;
//	int salary = 10000;
//
//	return 0;
//}
//
//int main()
//{
//	//int age = 20;
//	//float weight = 55.8;
//
//
//	return 0;
//}

//变量的分类
//全局变量
//局部变量

//全局变量 - 在大括号外部定义的变量就是全局变量
int a = 100;


//局部变量就是在main函数中定义的变量 - err
//
//void test()
//{
//	int b = 10;
//}
//
//int main()
//{
//	//局部变量 - 在大括号(代码块)内部定义的变量就是局部变量
//	int a = 10;
//	printf("a = %d\n", a);// 局部变量的全局变量冲突（一样）的情况下，局部优先
//
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//printf()是输出输出
//	//scanf()是输入函数
//	//
//
//	//scanf函数要正常使用，就得在scanf所在的源文件的第一行加上：#define _CRT_SECURE_NO_WARNINGS 1
//
//	scanf("%d %d", &num1, &num2);
//
//	sum = num1 + num2;
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//newc++file.cpp


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入你想要进行计算的数字:>\n");
	while (~scanf("%d%d", &a, &b))
	{
		printf("a+b=%d\n", a + b);
	}
	return 0;
}