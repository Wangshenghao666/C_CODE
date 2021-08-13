#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");//输入密码，并存放在password数组中
//	scanf("%s", password);
//	//缓冲区还剩余一个'\n '
//	//读取一下'\n'
//	getchar();
//	printf("请确认（Y / N):>");
//	int ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int tem = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//如果缓冲区有许多字符，改成循环。
//	while ((tem = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y / N):>");
//	int ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
// 
//实现一个函数，打印乘法口诀表，口诀表的行数列数自己定。
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	
//	return 0;
//}
//字符串逆序（常规）
//#include<string.h>
//void reverse_string(char *str)
//{
//	int len = strlen(str);
//	int left = 0;//'a'
//	int right = len - 1;//'f'
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char arr[20] = { "abcdef" };
//	//数组名是首元素的地址
//	//首元素就是char类型
//	//char *
//	reverse_string(arr);
//	printf("%s\n", arr);//期望结果是fedcba
//
//	return 0;
//}
//递归版本
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char str[])
//{
//	int len = my_strlen(str);
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//		str[len - 1]  = tmp;
//}
//int main()
//{
//	char arr[20] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//计算一个数的每位之和（递归实现）
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	
//	unsigned int num = 1234;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//编写一个函数实现N的K次方，使用递归
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 2;
//	int k = 3;
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
