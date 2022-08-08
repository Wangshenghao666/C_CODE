#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// ����ʵ�ֵĽӿ�
// ��������
void InsertSort(int* a, int n);

//��ӡ�ӿ�
void PrintArray(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);

// ѡ������
void Swap(int* px, int* py);//��������
void SelectSort(int* a, int n);

//������
void AdjustDown(int* a, int n, int parent);//���µ���
void HeapSort(int* a, int n);

//����
void QuickSort(int* a, int left, int right);//�ݹ�ʽ
//����ȡ��
int GetMidIndex(int* a, int left, int right);
void QuickSortNonR(int* a, int left, int right);//�ǵݹ�

//�鲢
void MergeSort(int* a, int n);
void MergeSortNonR(int* a, int n);//�ǵݹ�