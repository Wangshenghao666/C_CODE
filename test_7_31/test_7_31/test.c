#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.输入1到5输出的是“weekday”
//2.输入6到7输出的是“weekend”
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2 :
//	case 3 :
//	case 4 :
//	case 5 :
//			  printf("weekday\n");
//		  break;
//	 case 6:
//	 case 7 :
//		  printf("weekend\n");
//			break;
//	}
//	return 0;
//}


//for循环（常用，最多）
//语法：for(表达式1：表达式2：表达式3)1：初始化 2：条件判断 3：调整部分
        //循环语句：
//举例：使用for循环在屏幕上打印1-10的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//break和continue的用法
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}打印结果01234 break见到跳出循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}打印结果1234678910，遇到continue后面不用看继续开始


//for语句的建议：
//1 不可在for循环体内修改循环变量，防止for循环失去控制。
//2 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。
//3 for循环的初始化 调整 判断都可以省略。但是：for循环的判断部分被省略，那判断部分恒为真。
//4 如果不是很熟练，建议大家不要随便省略。


//一道笔试题
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}打印结果是没有，因为判断部分=0为假


//do while循环
//语法：do 
//       循环语句：
//while (表达式)；
//eg:打印1-10的数字
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}break和continue用法一样。


