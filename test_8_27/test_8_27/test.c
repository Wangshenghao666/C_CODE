#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void exchange(int a[],int b[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//int main()
//{
//	int a[] = { 1, 3, 5, 7, 9 };
//	int b[] = { 2, 4, 6, 8, 0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	exchange(a, b, sz);
//	
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
void Init(int * arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(arr + i) = i;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);

	return 0;
}