#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#define N 1000
////��̬˳���
//struct SeqList
//{
//	int a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//};
//
////���Ϳ���typedef
//#define N 1000
//typedef int SLDataType;
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};
//void SeqListPushBack(struct SeqList* ps, SLDataType x);


//�ṹ��Ҳtypedef,��SL��ʾ,�����£�
//#define N 1000
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;
//}SL;
////�ӿں���
//void SeqListInit(SL* ps, SLDataType x);//��ʼ��
//void SeqListPushBack(SL* ps, SLDataType x);//β��
//void SeqListPopBack(SL* ps);//βɾ
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
//void SeqListPopFront(SL* ps);//ͷɾ


//�����Ƕ�̬�汾

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;//��ʾ�����д洢�˶��ٸ�����
	int capacity;//����ʵ���ܴ����ݵĿռ������Ƕ��
}SL;
//�ӿں���
void SeqListDestory(SL* ps);//ʹ����realloc��������������Ҫ�ͷ�
void SeqListPrint(SL* ps);//��ӡ����
void SeqListInit(SL* ps);//��ʼ��
void SeqListPushBack(SL* ps, SLDataType x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
void SeqListPopFront(SL* ps);//ͷɾ
void SeqListCheckCapacity(SL* ps, SLDataType x);//��װ��������������
int SeqListFind(SL* ps, SLDataType x);//����
void SeqListInsert(SL* ps,int pos, SLDataType x);//ָ��pos�±�λ��������
void SeqListErase(SL* ps, int pos);//ɾ��posλ��

