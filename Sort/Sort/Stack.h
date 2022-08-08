#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <stdbool.h>

typedef int STDatatype;
typedef struct Stack
{
	STDatatype* a;
	int top;//栈顶
	int capacity;//容量
}ST;

void StackInit(ST* ps);//初始化栈
void StackDestroy(ST* ps);//销毁栈
void StackPush(ST* ps, STDatatype x);//入栈
void StackPop(ST* ps);//出栈
STDatatype StackTop(ST* ps);//获取栈顶元素
int StackSize(ST* ps);//获取栈中有效元素的个数
bool StackEmpty(ST* ps);//检测栈是否为空
