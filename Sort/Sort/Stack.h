#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <stdbool.h>

typedef int STDatatype;
typedef struct Stack
{
	STDatatype* a;
	int top;//ջ��
	int capacity;//����
}ST;

void StackInit(ST* ps);//��ʼ��ջ
void StackDestroy(ST* ps);//����ջ
void StackPush(ST* ps, STDatatype x);//��ջ
void StackPop(ST* ps);//��ջ
STDatatype StackTop(ST* ps);//��ȡջ��Ԫ��
int StackSize(ST* ps);//��ȡջ����ЧԪ�صĸ���
bool StackEmpty(ST* ps);//���ջ�Ƿ�Ϊ��
