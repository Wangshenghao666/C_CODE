#define _CRT_SECURE_NO_WARNINGS 1
#include"HP.h"

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
void HeapPush(HP* hp, HPDatetype x)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		size_t newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDatetype* tmp = (HPDatetype*)realloc(hp->a, sizeof(HPDatetype)*newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		hp->a = tmp;
		hp->capacity = newcapacity;
	}
	hp->a[hp->size] = x;
	hp->size++;
	AdJustUp(hp->a, hp->size - 1);
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
		if (a[child] > a[parent])//���ҪС�ѣ�a[child] < a[parent]
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
bool HeapEmpty(HP* hp)
{
	assert(hp);
	return hp->size == 0;
}
HPDatetype HeapSize(HP* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	return hp->size;
}
void AdJustDown(int* a, int n, int parent)
{
	assert(a);
	int child = parent * 2 + 1;
	while (child < n)
	{
		//ѡ�����Һ��Ӵ����һ��
		if (child + 1 < n && a[child + 1] > a[child])//���ҪС�ѣ�a[child + 1] < a[child]
		{
			++child;
		}
		//�����ĺ��Ӵ��ڸ��ף�����
		if (a[child] > a[parent])//���ҪС�ѣ�a[child] < a[parent]
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
void HeapPop(HP* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;

	AdJustDown(hp->a, hp->size, 0);
}