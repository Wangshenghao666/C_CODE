#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDatetype;

typedef struct Heap
{
	HPDatetype* a;
	int size;
	int capacity;
}HP;

void HeapInit(HP* hp);//��ʼ��
void HeapDestroy(HP* hp);//����
void Swap(HPDatetype* x, HPDatetype *y);//����
void AdJustUp(int* a, int child);//С�����ϵ���
void AdJustDown(int* a, int n, int parent);//С���������



