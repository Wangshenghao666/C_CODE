#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

作业标题
求两个数二进制中不同位的个数

作业内容
编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

输入例子 :

1999 2299

输出例子 : 7
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d%d", &n1, &n2);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}
函数形式
int count_diff_bit(int n1, int n2)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n1 = 0; 
	int n2 = 0;
	scanf("%d%d", &n1, &n2);
	int ret = count_diff_bit(n1, n2);
	printf("%d\n", ret);
	return 0;
}
更深层次的理解

int NumberOf1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int count_diff_bit(int n1, int n2)
{
	int count = 0;
	int t = n1^n2;
	count = NumberOf1(t);
	return count;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d%d", &n1, &n2);
	int ret = count_diff_bit(n1, n2);
	printf("%d\n", ret);
	return 0;
}



作业标题
打印整数二进制的奇数位和偶数位

作业内容
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	printf("偶数位：");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	printf("奇数位：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	
	return 0;
}