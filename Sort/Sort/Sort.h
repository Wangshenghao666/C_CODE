#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// 排序实现的接口
// 插入排序
void InsertSort(int* a, int n);

//打印接口
void PrintArray(int* a, int n);

// 希尔排序
void ShellSort(int* a, int n);

// 选择排序
void Swap(int* px, int* py);//交换函数
void SelectSort(int* a, int n);

//堆排序
void AdjustDown(int* a, int n, int parent);//向下调整
void HeapSort(int* a, int n);

//快排
void QuickSort(int* a, int left, int right);//递归式
//三数取中
int GetMidIndex(int* a, int left, int right);
void QuickSortNonR(int* a, int left, int right);//非递归

//归并
void MergeSort(int* a, int n);
void MergeSortNonR(int* a, int n);//非递归