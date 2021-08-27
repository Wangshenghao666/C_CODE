#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。
//
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//
//输出描述：
//输出一行，为正整数n表示为六进制的结果
//int main()
//{
//	int num = 0;
//	int arr[50] = { 0 };
//	//输入
//	scanf("%d", &num);
//	//转化
//	int i = 0;
//	while (num)
//	{
//		arr[i] = num % 6;
//		i++;
//		num = num / 6;
//	}
//	//输出
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}



//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int t = n / 12 * 4 + 2;
//	printf("%d\n", t);
//}


//描述
//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//
//输入描述：
//每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//
//输出描述：
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	//输入
//	scanf("%d %d", &n, &m);
//	//计算
//	long long n2 = n;
//	long long m2 = m;
//	//先计算最大公约数
//	long long c = 0;
//	while (c = m2%n2)
//	{
//		m2 = n2;
//		n2 = c;
//	}
//	//求最小公倍数
//	long long min = m*n / n2;
//	//打印
//	printf("%lld", min + n2);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%d %d", &n, &m);
//	long long n2 = n;
//	long long m2 = m;
//	long long c = 0;
//	while (c = n2%m2)
//	{
//		n2 = m2;
//		m2 = c;
//
//	}
//	long long min = m*n / m2;
//	printf("%lld", min + m2);
//	return 0;
//}



//描述
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述：
//多组输入，每行输入包括一个字符。
//输出描述：
//针对每行输入，输出该字符是字母（YES）或不是（NO）。
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
//输出描述：
//针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)
//			{
//				if (i == 1 || i == n || j == 1 || j == n)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//描述
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//输入描述：
//一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出描述：
//一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
//int main()
//{
//	int i = 0;
//	int sc = 0;
//	int sum = 0;
//	int max = 0;//假设0就是最高分
//	int min = 100;//假设100就是最低分
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d", &sc);
//		sum += sc;
//		if (sc>max)
//			max = sc;
//		if (sc<min)
//			min = sc;
//	}
//	double avg = (sum - max - min) / 5.0;
//	printf("%.2lf\n", avg);
//	return 0;
//}


//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0<a, b, c<1000)，作为三角形的三个边，用空格分隔。
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			if (a == b  &&  b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}