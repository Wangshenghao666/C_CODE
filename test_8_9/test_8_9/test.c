#define _CRT_SECURE_NO_WARNINGS 1
//拷贝字符串
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);//如果要接收 char* ret = strcpy(arr1,arr2)
//	printf("%s\n", arr1);
//	return 0;
//}
//内存设置（设置内存块，前提以字节为单位）
//#include<stdio.h> 
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bie";//让变成xxxxx bit
//	char* ret =(char*) memset(arr, 'x', 5);
//	printf("%s\n", ret);
//	return 0;
//}
//函数——自定义函数
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//
//}
//不使用函数交换整形变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("交换前：a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}
//使用函数来交换整形变量
//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d b = %d\n", a, b);//实参a和b，传给形参x,y的时候，形参将是实参的一份临时拷贝。改变形参变量x,y，是不会影响a b.
//	Swap(a, b);
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}打印结果有问题，调试一下。
//利用指针变量解决问题
//void Swap(int * px, int * py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}

//利用函数实现100到200之间的素数
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}