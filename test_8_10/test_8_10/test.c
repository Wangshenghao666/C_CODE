#define _CRT_SECURE_NO_WARNINGS 1
//дһ�������ж��ǲ�������
#include<stdio.h>
//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//		right = mid - 1;
//		else
//			return mid;
//
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	return 0;
//}
	//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int * p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//
//	printf("%d\n", num);
//	Add(&num);
//
//	printf("%d\n", num);
//
//	return 0;
//}
//����
int Add(int n)
{
	return n + 1;
}
int main()
{
	int num = 0;
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	
	return 0;
}