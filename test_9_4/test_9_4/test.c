#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc��ָ��һ���ַ�����
//
//	char* p = "hello bit";//"hello bit"��һ�������ַ���--������ڴ�ĳ�����
//	//������ʽ�������ǣ��ѳ����ַ�����hello bit"�ĵ�һ���ַ�h�ĵ�ַ��ֵ��p,��������д���벻�ã�ǰ��Ӧ�ü�const,����*p������
//	const char* p = "hello bit";
//	return 0;
//}
//һ�������⡣����
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}
//str1,str2 �����������ռ䣬��ʼλ�ò�ͬ��str3,str4 �ǳ����ַ���--�����޸�

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	                //int* int* int* int*
//	int* arr1[4] = { &a, &b, &c, &d };//arr1������ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",*(arr1[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);//parr[i][j] == *(parr[i]+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ��
//int main()
//{
//	/*int arr[10] = { 0 };
//	int *(parr)[] = &arr;*/
//	int* arr[10];
//	int* *(p)[10] = &arr;
//	return 0;
//}
//void print1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void print2(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(arr, sz);
//	printf("\n");
//	print2(arr, sz);
//	return 0;
//}//��ǰӦ�õģ��ײ�ԭ����ͬ��������ָ��д

//void print3(int(*parr)[10], int sz)//err
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", parr[i]);//parr[i] == *(parr+i)
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print3(&arr, sz);
//	return 0;
//}
//void print4(int(*parr)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", parr[0][i]);
//		//printf("%d ", (*(parr + 0))[i]);
//		printf("%d ", (*parr)[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print4(&arr, sz);
//	return 0;
//}
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*arr)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
	//print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}