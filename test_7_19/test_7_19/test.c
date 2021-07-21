#define _CRT_SECURE_NO_WARNINGS 1
//左移操作符
//int main()
//{
//	int a = 12;
//	int b = a << 1;
//	printf("b=%d\n", b);
//	return 0;
//}


//int main()
//{
//
//	int a = 5;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

////条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b) ? (a):(b);
//	printf("%d\n", max);
//	return 0;
//}


////逗号操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 6;
//	int d = (a -= 2, b = a + c, c = a - b);
//	printf("%d\n", d);
//	return 0;
//}

//
//描述
//给定秒数seconds(0< seconds < 100, 000, 000)，把秒转化成小时、分钟和秒。
//
//输入描述：
//一行，包括一个整数，即给定的秒数。
//输出描述：
//一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
//示例1
//输入：
//3661
//复制
//输出：
//1 1 1


//int main()
//{
//	int sec = 0;
//	scanf("%d",&sec);
//	int h = sec / 60 / 60;
//	int m = sec / 60 % 60;
//	int s = sec % 60;
//	printf("%d %d %d\n", h, m, s);
//	return 0;
//}
////结果输入3661，打印是111，正确。


//描述
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//
//输入描述：
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：
//一行，输出5个数的平均数（保留一位小数）。
//示例1
//输入：
//75 80 43 67 96
//输出：
//72.2
//



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	printf("%.1f\n", (a + b + c + d + e) / 5.0);
//
//	return 0;
//}


//描述
//给定两个整数a和b(－10, 000 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入描述：
//一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述：
//一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
//示例1
//输入：
//15 2
//输出：
//7 1

#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a / b, a % b);
	return 0;
}





