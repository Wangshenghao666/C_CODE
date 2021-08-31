#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



作业标题
统计二进制中1的个数

作业内容
写一个函数返回参数二进制中 1 的个数。

比如： 15    0000 1111    4 个 1

int count_bit_one(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count_bit_one(num);
	printf("%d\n", ret);
	return 0;
}
int count_bit_one(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count_bit_one(num);
	printf("%d\n", ret);
	return 0;
}
上面2种方法一般，下面这个方法牛逼
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count_bit_one(num);
	printf("%d\n", ret);
	return 0;
}



写一个代码，看是不是2的次方数
int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}