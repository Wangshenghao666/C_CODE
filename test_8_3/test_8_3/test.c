#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//最大公约数：即两个数据中公共约数的最大者。
//辗转相除法
//举例：18和27的最大公约数
//第一次：a = 18 b = 27 c = a%b = 18 % 27 = 18
//循环中：a = 27 b = 18
//第二次：a = 27 b = 18 c = a%b = 27 % 18 = 9
//循环中：a = 18 b = 9
//
//第三次：a = 18 b = 9 c = a%b = 18 % 9 = 0
//循环结束
//
//此时b中的内容即为两个数中的最大公约数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d%d", &i, &j);
//	while (k = i%j)
//	{
//		i = j;
//		j = k;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//打印1000-2000的闰年

//找出100有几个带9
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)//将个位数字提出来，检查是否为9
//		{
//			ret++;
//		}
//		if (a / 10 == 9)//将十位数字提出来，检查是否为9
//		{
//			ret++;
//		}
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值（类型转换
//思路：可以将上式分解成为分母为奇数项的总和，然后两项进行相减。
//注意：在求分数相加减时应该注意定义变量的类型应该是double型。
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double sum1 = 0;
//	double sum2 = 0; 
//	for (i = 1; i <= 100; i++)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//	printf("%d\n", sum1);
//	for (i = 2; i <= 100; i++)
//	{
//		sum2 = sum2 + 1.0 / i;
//	}
//	printf("%d\n", sum2);
//	sum = sum1 - sum2;
//	printf("%d\n", sum);
//	return 0;
//}
//在for循环里面的sum1 = sum1 + 1.0 / i;其中定义sum1的目的是为了存储每一次计算奇数项时的总和，而其中的1.0，是因为分数计算的输出结果不一定为整形，改为1.0可以将1.0/i的结果改为double型，变可以存储多位小数。
//


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	printf("请输入10个数字（输入一个数字请按回车键）");
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d\n");
//	printf("你所输入的十个数字是： ");
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			int temp = arr[0];
//			arr[0] = arr[i];
//			arr[i] = temp;
//		}
//	}
//	printf("输入的最大数字是：%d\n", arr[0]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d*%d=%-2d ", j, i, sum);//%-2d 2位对齐
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = 0;
	int mid = 0;
	int n = 56;
	int flag = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid < n])
		{
			left = mid + 1;
		}
		else if (arr[mid > n])
		{
			right = mid - 1;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%d\n", mid);
	else
		printf("找不到\n");
	return 0;
}
