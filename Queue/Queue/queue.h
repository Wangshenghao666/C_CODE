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
void QueueInit(Queue* pq);//��ʼ��
void QueueDestroy(Queue* pq);//����
void QueuePush(Queue* pq, QDatatype x);//��β������
void QueuePop(Queue*pq);//��ͷ������
bool QueueEmpty(Queue* pq);//�п�
QDatatype QueueFront(Queue* pq);//��ö���ͷ��Ԫ��
QDatatype QueueBack(Queue* pq);//��ö��ж�βԪ��
int QueueSize(Queue* pq);//��ö�������ЧԪ�صĸ���
