#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//封装函数，增加容量
{
	//如果没有空间或空间不足，那我们就扩容
	if (ps->size == ps->capacity)//当有效数据和容量相同时
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//有可能为0或其他，使用三目操作符
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));//使用realloc扩容
		if (tmp == NULL)//判断扩容是否成功
		{
			//扩容失败
			printf("realloc fail\n");
			exit(-1);
		}
		//成功改变数值 
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	//扩容成功
}


void SeqListPushBack(SL* ps, SLDataType x)//尾插
{
	
	//SeqListCheckCapacity(ps);
	//ps->a[ps->size] = x;//理想情况直接插到后面
	//ps->size++;
	SeqListInsert(ps, ps->size, x);

}


void SeqListPrint(SL* ps)//打印函数
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", i[ps->a]);
	}
	printf("\n");
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}


void SeqListPopBack(SL* ps)//尾删
{
	//ps->a[ps->size-1] = 0;//这个把最后一位置成0，意义不大，可以删除
	/*assert(ps->size > 0);
	ps->size--;*/
	SeqListErase(ps, ps->size - 1);
}
void SeqListPushFront(SL* ps, SLDataType x)//头插
{
	//SeqListCheckCapacity(ps);

	////先挪动数据
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	//ps->a[0] = x;
	//ps->size++;
	SeqListInsert(ps, 0, x);
}
void SeqListPopFront(SL* ps)//头删
{
	/*assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;*/
	SeqListErase(ps, 0);
}

int SeqListFind(SL* ps, SLDataType x)//查找
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SL* ps, int pos, SLDataType x)//指定pos下标位置来插入
{
	assert(pos >= 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);//考虑扩容
	//挪动数据
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)//删除pos位置
{
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}