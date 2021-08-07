#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int m = 0;
//	for (m = min; m >= 1; m++)
//	{
//		if (a % m == 0 && b % m == 0)
//			break;
//	}
//	printf("最大公约数：%d\n", m);
//	return 0;
//}//求最大公约数\

//辗转相除法
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是：%d\n", b);
//	return 0;
//}
//求1000到2000的闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*判断year是否是闰年
//			能被4整除，不能被100整除是闰年
//			能被400整除是闰年*/
//
//
//		if (year % 4 == 0)
//		{	
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//写一个代码，打印100-200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//
//}
//优化后求素数的方法
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}