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
//	printf("���Լ����%d\n", m);
//	return 0;
//}//�����Լ��\

//շת�����
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
//	printf("���Լ���ǣ�%d\n", b);
//	return 0;
//}
//��1000��2000������
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*�ж�year�Ƿ�������
//			�ܱ�4���������ܱ�100����������
//			�ܱ�400����������*/
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
//дһ�����룬��ӡ100-200֮�������
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
//�Ż����������ķ���
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