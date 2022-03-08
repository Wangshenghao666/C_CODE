#pragma once
//大堆实现

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
void HeapPush(HP* hp, HPDatetype x);//插入
void HeapPrint(HP* hp);//打印
void Swap(HPDatetype* x, HPDatetype *y);//交换
void AdJustUp(int* a, int child);//大堆向上调整
bool HeapEmpty(HP* hp);//判空
HPDatetype HeapSize(HP* hp);//有效数据
void AdJustDown(int* a, int n, int parent);//大堆下向调整
void HeapPop(HP* hp);//删除堆顶数据

