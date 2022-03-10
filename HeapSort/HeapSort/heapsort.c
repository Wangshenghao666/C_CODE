#define _CRT_SECURE_NO_WARNINGS 1
#include"heapsort.h"

void HeapInit(HP* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}
void HeapDestroy(HP* hp)
{
	assert(hp);
	free(hp->a);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}
void HeapPrint(HP* hp)
{
	assert(hp);
	int i = 0;
	for (i = 0; i < hp->size; ++i)
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
}
void Swap(HPDatetype* x, HPDatetype* y)
{
	assert(x && y);
	HPDatetype tmp = *x;
	*x = *y;
	*y = tmp;
}
void AdJustUp(int* a, int child)
{
	assert(a);
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdJustDown(int* a, int n, int parent)
{
	assert(a);
	int child = parent * 2 + 1;
	while (child < n)
	{
		//选出左右孩子大的那一个
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}
		//如果大的孩子大于父亲，交换
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
