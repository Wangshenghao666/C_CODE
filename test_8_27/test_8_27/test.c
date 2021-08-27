#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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


//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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