#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int LTDatetype;
typedef struct ListNode
{
	LTDatetype data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;
LTNode* ListInit();//初始化
LTNode* BuyListNode(LTDatetype x);

void ListPushBack(LTNode* phead, LTDatetype x);//尾插
void ListPrint(LTNode* phead);//打印
void ListPopBack(LTNode* phead);//尾删
void ListPushFront(LTNode* phead, LTDatetype x);//头插
void ListPopFront(LTNode* phead);//头删
LTNode* ListFind(LTNode* phead, LTDatetype x);//查找
void ListInsert(LTNode* pos, LTDatetype x);//在pos位置之前插入数据
void ListErase(LTNode* pos);//在pos位置删除
void ListDestroy(LTNode* phead);//销毁

