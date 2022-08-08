#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
#include<stdlib.h>
#include<string.h>
void Test1Sort()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 };
	PrintArray(a, sizeof(a) / sizeof(int));
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void Test2Shell()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7, 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 ,7};
	PrintArray(a, sizeof(a) / sizeof(int));
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestSelectSort()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 };
	PrintArray(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestHeapSort()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 };
	PrintArray(a, sizeof(a) / sizeof(int));
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestBubbleSort()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 };
	PrintArray(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestQuickSort()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 };
	PrintArray(a, sizeof(a) / sizeof(int));
	QuickSort(a, 0,sizeof(a) / sizeof(int)-1);
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestQuickSort2()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1, 7 };
	PrintArray(a, sizeof(a) / sizeof(int));
	QuickSortNonR(a, 0, sizeof(a) / sizeof(int)-1);
	PrintArray(a, sizeof(a) / sizeof(int));
}
void TestMergeSort()
{
	int a[] = { 10, 6, 7, 1, 3, 9, 4, 2 };
	PrintArray(a, sizeof(a) / sizeof(int));
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}
int main()
{
	//Test1Sort();
	//Test2Shell();
	//TestHeapSort();
	//TestSelectSort();
	//TestBubbleSort();
	//TestQuickSort();
	//TestQuickSort2();
	TestMergeSort();
	return 0;
}
