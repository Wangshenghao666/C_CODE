#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

��ҵ����
���������������в�ͬλ�ĸ���

��ҵ����
���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

�������� :

1999 2299

������� : 7
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
������ʽ
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
�����ε����

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



��ҵ����
��ӡ���������Ƶ�����λ��ż��λ

��ҵ����
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	printf("����λ��");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	
	return 0;
}