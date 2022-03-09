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
void HeapPush(HP* hp, HPDatetype x);//����
void HeapPrint(HP* hp);//��ӡ
void Swap(HPDatetype* x, HPDatetype *y);//����
void AdJustUp(int* a, int child);//С�����ϵ���
bool HeapEmpty(HP* hp);//�п�
HPDatetype HeapSize(HP* hp);//��Ч����
void AdJustDown(int* a, int n, int parent);//С���������
void HeapPop(HP* hp);//ɾ���Ѷ�����
HPDatetype HeapTop(HP* hp);//ȡ�Ѷ�����

void PrintTopK(int* a, int n, int k);//topk
