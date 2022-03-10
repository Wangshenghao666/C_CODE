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

void HeapInit(HP* hp);//初始化
void HeapDestroy(HP* hp);//销毁
void Swap(HPDatetype* x, HPDatetype *y);//交换
void AdJustUp(int* a, int child);//小堆向上调整
void AdJustDown(int* a, int n, int parent);//小堆下向调整



