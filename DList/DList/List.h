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
LTNode* ListInit();//��ʼ��
LTNode* BuyListNode(LTDatetype x);

void ListPushBack(LTNode* phead, LTDatetype x);//β��
void ListPrint(LTNode* phead);//��ӡ
void ListPopBack(LTNode* phead);//βɾ
void ListPushFront(LTNode* phead, LTDatetype x);//ͷ��
void ListPopFront(LTNode* phead);//ͷɾ
LTNode* ListFind(LTNode* phead, LTDatetype x);//����
void ListInsert(LTNode* pos, LTDatetype x);//��posλ��֮ǰ��������
void ListErase(LTNode* pos);//��posλ��ɾ��
void ListDestroy(LTNode* phead);//����

