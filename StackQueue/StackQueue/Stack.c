#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void StackInit(ST* ps)//初始化
{
	assert(ps);
	ps->a = NULL;//存放有效数据
	ps->top = 0;//存放栈顶的位置
	ps->capacity = 0;// 有效容量
}


void StackDestroy(ST* ps)//销毁
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}


void StackPush(ST* ps, STDatatype x)//插入数据
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDatatype* tmp = (STDatatype*)realloc(ps->a, sizeof(STDatatype)*newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}



void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	ps->top--;
}



STDatatype StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}



int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}



bool StackEmpty(ST* ps)
{
	assert(ps);

	/*if (ps->top == 0)
	{
	return true;
	}
	else
	{
	return false;
	}*/
	return ps->top == 0;
}