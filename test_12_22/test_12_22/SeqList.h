#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#define N 1000
////静态顺序表
//struct SeqList
//{
//	int a[N];
//	int size;//表示数组中存储了多少个数据
//};
//
////类型可以typedef
//#define N 1000
//typedef int SLDataType;
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};
//void SeqListPushBack(struct SeqList* ps, SLDataType x);


//结构体也typedef,用SL表示,则如下：
//#define N 1000
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;
//}SL;
////接口函数
//void SeqListInit(SL* ps, SLDataType x);//初始化
//void SeqListPushBack(SL* ps, SLDataType x);//尾插
//void SeqListPopBack(SL* ps);//尾删
//void SeqListPushFront(SL* ps, SLDataType x);//头插
//void SeqListPopFront(SL* ps);//头删


//以下是动态版本

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;//表示数组中存储了多少个数据
	int capacity;//数组实际能存数据的空间容量是多大
}SL;
//接口函数
void SeqListDestory(SL* ps);//使用了realloc函数，不用了需要释放
void SeqListPrint(SL* ps);//打印函数
void SeqListInit(SL* ps);//初始化
void SeqListPushBack(SL* ps, SLDataType x);//尾插
void SeqListPopBack(SL* ps);//尾删
void SeqListPushFront(SL* ps, SLDataType x);//头插
void SeqListPopFront(SL* ps);//头删
void SeqListCheckCapacity(SL* ps, SLDataType x);//封装函数，增加容量
int SeqListFind(SL* ps, SLDataType x);//查找
void SeqListInsert(SL* ps,int pos, SLDataType x);//指定pos下标位置来插入
void SeqListErase(SL* ps, int pos);//删除pos位置

