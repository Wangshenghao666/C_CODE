#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDatatype;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDatatype data;
}QueueNode;
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;
void QueueInit(Queue* pq);//初始化
void QueueDestroy(Queue* pq);//销毁
void QueuePush(Queue* pq, QDatatype x);//队尾入数据
void QueuePop(Queue*pq);//队头出数据
bool QueueEmpty(Queue* pq);//判空
QDatatype QueueFront(Queue* pq);//获得队列头部元素
QDatatype QueueBack(Queue* pq);//获得队列队尾元素
int QueueSize(Queue* pq);//获得队列中有效元素的个数
