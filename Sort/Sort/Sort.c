#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include"Stack.h"
void PrintArray(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int x = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = x;
	}
}

void ShellSort(int* a, int n)
{
	assert(a);
	int gap = n;
	while (gap >= 1)
	{
		gap = gap / 2;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int x = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > x)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = x;
		}
	}
}

void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		++begin;
		--end;
	}
}

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child+1 < n && a[child + 1] > a[child])
		{
			++child;
		}
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
void HeapSort(int* a, int n)
{
	//o(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

void BubbleSort(int* a, int n)
{
	/*for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - j; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
			}
		}
	}*/


	int end = n;
	while (end > 0)
	{
		int exchange = 0;
		for (int i = 0; i < end; i++)
		{
			if (a[i - 1] > a[i])
			{
				exchange = 1;
				Swap(&a[i - 1], &a[i]);
			}
		}
		--end;
		if (exchange == 0)
		{
			break;
		}
	}
}


int GetMidIndex(int* a, int left, int right)
{
	//int mid = (left + right) / 2;
	int mid = left + ((right - left) >> 1);
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

int Partion(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[midi], &a[left]);

	int keyi = left;
	while (left < right)
	{
		//�ұ����ߣ���С
		while (left < right && a[right] >= a[keyi])
		{
			--right;
		}
		//������ߣ��Ҵ�
		while (left < right && a[left] >a[keyi])
		{
			++left;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	return keyi;
}
//�ڿӷ�
int Partion1(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[midi], &a[left]);
	int key = a[left];
	int pivot = left;
	while (left < right)
	{
		//�ұ���С���ŵ���ߵĿ�����
		while (left < right && a[right] >= key)
		{
			--right;
		}
		a[pivot] = a[right];
		pivot = right;
		//����Ҵ󣬷ŵ��ұߵĿ�����
		while (left < right && a[left] <= key)
		{
			++left;
		}
		a[pivot] = a[left];
		pivot = left;
	}
	a[pivot] = a[key];
	return pivot;
}
//ǰ��ָ��
int Partion2(int* a, int left, int right)
{
	int keyi = left;
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int keyi = Partion2(a, left, right);
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi+1,right);
}
void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	StackInit(&st);
	StackPush(&st, left);
	StackPush(&st, right);

	while (!StackEmpty(&st))
	{
		int end = StackTop(&st);
		StackPop(&st);

		int begin = StackTop(&st);
		StackPop(&st);

		int keyi = Partion2(a, begin, end);
		// [begin, keyi-1] keyi [keyi+1, end]
		if (keyi + 1 < end)
		{
			StackPush(&st, keyi + 1);
			StackPush(&st, end);
		}

		if (begin < keyi - 1)
		{
			StackPush(&st, begin);
			StackPush(&st, keyi - 1);
		}
	}

	StackDestroy(&st);
}

void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}

	int mid = (left + right) / 2;
	// [left, mid] [mid+1, right] ����
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}

	// tmp ���鿽����a
	for (int j = left; j <= right; ++j)
	{
		a[j] = tmp[j];
	}
}

void MergeSort(int* a, int n)
{
	
	int* tmp = (int*)malloc(sizeof(int)*n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
	tmp = NULL;
}


// ʱ�临�Ӷȣ�O(N*logN)
// �ռ临�Ӷȣ�O(N)
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			// [i,i+gap-1] [i+gap,i+2*gap-1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			// ����˼�룺end1��begin2��end2���п���Խ��
			// end1Խ�� ���� begin2 Խ�綼����Ҫ�鲢
			if (end1 >= n || begin2 >= n)
			{
				break;
			}

			// end2 Խ�磬��Ҫ�鲢������end2
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			int index = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}

			// �ѹ鲢С���俽����ԭ����
			for (int j = i; j <= end2; ++j)
			{
				a[j] = tmp[j];
			}
		}

		gap *= 2;
	}

	free(tmp);
	tmp = NULL;
}

// ʱ�临�Ӷȣ�O(Max(N, Range))
// �ռ临�Ӷȣ�O(range)
// �ʺϷ�Χ�Ƚϼ��е���������
// ��Χ�ϴ󣬻����Ǹ������ȵȶ����ʺ�������
void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}

		if (a[i] < min)
		{
			min = a[i];
		}
	}

	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int)*range);
	memset(count, 0, sizeof(int)*range);
	if (count == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	// ͳ�ƴ���
	for (int i = 0; i < n; ++i)
	{
		count[a[i] - min]++;
	}

	// ���ݴ�������������
	int j = 0;
	for (int i = 0; i < range; ++i)
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
}