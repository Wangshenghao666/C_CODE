#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



��ҵ����
ͳ�ƶ�������1�ĸ���

��ҵ����
дһ���������ز����������� 1 �ĸ�����

���磺 15    0000 1111    4 �� 1

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
����2�ַ���һ�㣬�����������ţ��
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



дһ�����룬���ǲ���2�Ĵη���
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