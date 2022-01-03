#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
//单链表的最基本形态+命名
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
void SListPrint(SLTNode* phead);//打印函数
void SListPushBack(SLTNode** pphead, SLTDataType x);//尾插
void SListPushFront(SLTNode** pphead, SLTDataType x);//头插
SLTNode* BuyListNode(SLTDataType x);//封装函数，建立一个新的节点
void SListPopBack(SLTNode** pphead);//尾删
void SListPopFront(SLTNode** pphead);//头删
SLTNode* SListFind(SLTNode* phead, SLTDataType x);//查找函数
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);//在pos位置之前插入一个节点
void SListInsertAfter(SLTNode* pos, SLTDataType x);//在pos位置的后面插入一个数，这个更简单也方便
void SListErase(SLTNode** pphead, SLTNode* pos);//指定pos位置删除
void SListEraseAfter(SLTNode* pos);//pos的下一个位置删除
void SListDestory(SLTNode** pphead);//销毁
