#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//��װ��������������
{
	//���û�пռ��ռ䲻�㣬�����Ǿ�����
	if (ps->size == ps->capacity)//����Ч���ݺ�������ͬʱ
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//�п���Ϊ0��������ʹ����Ŀ������
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));//ʹ��realloc����
		if (tmp == NULL)//�ж������Ƿ�ɹ�
		{
			//����ʧ��
			printf("realloc fail\n");
			exit(-1);
		}
		//�ɹ��ı���ֵ 
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	//���ݳɹ�
}


void SeqListPushBack(SL* ps, SLDataType x)//β��
{
	
	//SeqListCheckCapacity(ps);
	//ps->a[ps->size] = x;//�������ֱ�Ӳ嵽����
	//ps->size++;
	SeqListInsert(ps, ps->size, x);

}


void SeqListPrint(SL* ps)//��ӡ����
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


void SeqListPopBack(SL* ps)//βɾ
{
	//ps->a[ps->size-1] = 0;//��������һλ�ó�0�����岻�󣬿���ɾ��
	/*assert(ps->size > 0);
	ps->size--;*/
	SeqListErase(ps, ps->size - 1);
}
void SeqListPushFront(SL* ps, SLDataType x)//ͷ��
{
	//SeqListCheckCapacity(ps);

	////��Ų������
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
void SeqListPopFront(SL* ps)//ͷɾ
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

int SeqListFind(SL* ps, SLDataType x)//����
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

void SeqListInsert(SL* ps, int pos, SLDataType x)//ָ��pos�±�λ��������
{
	assert(pos >= 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);//��������
	//Ų������
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)//ɾ��posλ��
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