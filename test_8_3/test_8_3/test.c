#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//���Լ���������������й���Լ��������ߡ�
//շת�����
//������18��27�����Լ��
//��һ�Σ�a = 18 b = 27 c = a%b = 18 % 27 = 18
//ѭ���У�a = 27 b = 18
//�ڶ��Σ�a = 27 b = 18 c = a%b = 27 % 18 = 9
//ѭ���У�a = 18 b = 9
//
//�����Σ�a = 18 b = 9 c = a%b = 18 % 9 = 0
//ѭ������
//
//��ʱb�е����ݼ�Ϊ�������е����Լ����
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
//��ӡ1000-2000������

//�ҳ�100�м�����9
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)//����λ���������������Ƿ�Ϊ9
//		{
//			ret++;
//		}
//		if (a / 10 == 9)//��ʮλ���������������Ƿ�Ϊ9
//		{
//			ret++;
//		}
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ������ת��
//˼·�����Խ���ʽ�ֽ��Ϊ��ĸΪ��������ܺͣ�Ȼ��������������
//ע�⣺���������Ӽ�ʱӦ��ע�ⶨ�����������Ӧ����double�͡�
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
//��forѭ�������sum1 = sum1 + 1.0 / i;���ж���sum1��Ŀ����Ϊ�˴洢ÿһ�μ���������ʱ���ܺͣ������е�1.0������Ϊ�����������������һ��Ϊ���Σ���Ϊ1.0���Խ�1.0/i�Ľ����Ϊdouble�ͣ�����Դ洢��λС����
//


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	printf("������10�����֣�����һ�������밴�س�����");
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d\n");
//	printf("���������ʮ�������ǣ� ");
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
//	printf("�������������ǣ�%d\n", arr[0]);
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
//			printf("%d*%d=%-2d ", j, i, sum);//%-2d 2λ����
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
		printf("�Ҳ���\n");
	return 0;
}
