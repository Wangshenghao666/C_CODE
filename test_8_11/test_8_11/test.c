#define _CRT_SECURE_NO_WARNINGS 1
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
#include<stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}//��ӡ���4321
//printf�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//����������󣬽����ظ���
//��ϰ1������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
#include<string.h>
//int my_strlen(char * s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}��������ĿҪ�󣨱�д��������������ʱ���������ַ������ȣ�
//int my_strlen(char * s)
//{
//	if (*s != '\0')
//	{
//		return 1 + my_strlen(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//�ݹ���һ�£����»�С��
//�ݹ���N�Ľ׳�
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//쳲���������
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}������������ظ�����

//����ѭ����ʽ
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
