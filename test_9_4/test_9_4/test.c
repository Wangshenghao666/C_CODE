#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc是指向一个字符变量
//
//	char* p = "hello bit";//"hello bit"是一个常量字符串--存放在内存的常量区
//	//上面表达式的作用是：把常量字符串“hello bit"的第一个字符h的地址赋值给p,但是这样写代码不好，前面应该加const,限制*p的内容
//	const char* p = "hello bit";
//	return 0;
//}
//一道面试题。。。
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
//str1,str2 是两个独立空间，起始位置不同。str3,str4 是常量字符串--不能修改

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	                //int* int* int* int*
//	int* arr1[4] = { &a, &b, &c, &d };//arr1是整型指针的数组
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


//数组指针
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
//}//以前应用的，底层原理相同，用数组指针写

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