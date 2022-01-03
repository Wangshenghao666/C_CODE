#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	////�ҵ�β�ڵ�
	//SLTNode* tail = phead;
	//while (tail->next != NULL)
	//{
	//	tail = tail->next;
	//}
	////�����µĿռ����ֵ
	//SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	//newnode->data = x;
	//newnode->next = NULL;

	//tail->next = newnode;
}

SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


void SListPushFront(SLTNode** pphead, SLTDataType x)//ͷ��
{
	assert(pphead);
	SLTNode* newnode = BuyListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)//βɾ
{
	assert(pphead);
	/*SLTNode* tail = *pphead;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	free(tail);
	tail = NULL;*/
	//����д����������Ұָ��


	/*assert(*pphead != NULL);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}*/
	
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}

}


void SListPopFront(SLTNode** pphead)//ͷɾ
{
	assert(pphead);
	assert(*pphead != NULL);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}


SLTNode* SListFind(SLTNode* phead, SLTDataType x)//���Һ���
{
	assert(phead);
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}


void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)//��posλ��֮ǰ����һ���ڵ�
{
	assert(pphead);
	assert(pos);
	//�ȴ���һ���µĽڵ�
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}


void SListInsertAfter(SLTNode* pos, SLTDataType x)//��posλ�õĺ������һ�������������Ҳ����
{
	assert(pos);
	SLTNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}


void SListErase(SLTNode** pphead, SLTNode* pos)//ָ��posλ��ɾ��
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)
	{
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;

		}
		prev->next = pos->next;
		free(pos);
	}
}


void SListEraseAfter(SLTNode* pos)//pos����һ��λ��ɾ��
{
	assert(pos);
	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
}


void SListDestory(SLTNode** pphead)//����
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}