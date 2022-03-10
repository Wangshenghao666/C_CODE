#define _CRT_SECURE_NO_WARNINGS 1
#include"heapsort.h"

//排升序
void HeapSort(int* a,int n)
{
	/* 把a构建成小堆
	 方法1：*/
	/*for (int i = 1; i < n; ++i)
	{
	AdJustUp(a, i);
	}*/



	// 方法2：
	// O(N)
	//建大堆：
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdJustDown(a, n, i);
	}
	// O(N*logN)
	for (int end = n - 1; end > 0; end--)
	{
		Swap(&a[0], &a[end]);
		//在调堆，选出次小的
		AdJustDown(a, end, 0);
	}


}
int main()
{
	int a[] = { 75, 69, 70, 50, 56, 10, 30, 33, 25, 15 };
	int n = sizeof(a) / sizeof(a[0]);
	
	//HeapSort(a,n);
	HeapSort(a, n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");



	return 0;
}