#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
//��������������̬+����
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
void SListPrint(SLTNode* phead);//��ӡ����
void SListPushBack(SLTNode** pphead, SLTDataType x);//β��
void SListPushFront(SLTNode** pphead, SLTDataType x);//ͷ��
SLTNode* BuyListNode(SLTDataType x);//��װ����������һ���µĽڵ�
void SListPopBack(SLTNode** pphead);//βɾ
void SListPopFront(SLTNode** pphead);//ͷɾ
SLTNode* SListFind(SLTNode* phead, SLTDataType x);//���Һ���
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);//��posλ��֮ǰ����һ���ڵ�
void SListInsertAfter(SLTNode* pos, SLTDataType x);//��posλ�õĺ������һ�������������Ҳ����
void SListErase(SLTNode** pphead, SLTNode* pos);//ָ��posλ��ɾ��
void SListEraseAfter(SLTNode* pos);//pos����һ��λ��ɾ��
void SListDestory(SLTNode** pphead);//����
