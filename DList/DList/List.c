#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
LTNode* ListInit()//³õÊ¼»¯
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}


LTNode* BuyListNode(LTDatetype x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}



void ListPushBack(LTNode* phead, LTDatetype x)//Î²²å
{
	/*assert(phead);
	LTNode* tail = phead->prev;
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;*/
	ListInsert(phead, x);
}


void ListPrint(LTNode* phead)//´òÓ¡
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPopBack(LTNode* phead)//Î²É¾
{
	//1
	assert(phead);
	assert(phead->next != phead);
	/*LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;
	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;*/
	////2
	//assert(phead);
	//assert(phead->next != phead);
	//LTNode* tail = phead->prev;
	//phead->prev = tail->prev;
	//tail->prev->next = phead;
	//free(tail);

	ListErase(phead->prev);
}


void ListPushFront(LTNode* phead, LTDatetype x)//Í·²å
{
	/*assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = next;
	next->prev = newnode;*/
	ListInsert(phead->next, x);
}


void ListPopFront(LTNode* phead)//Í·É¾
{
	assert(phead);
	assert(phead->next != phead);

	/*LTNode* next = phead->next;
	LTNode* nextNext = next->next;

	phead->next = nextNext;
	nextNext->prev = phead;
	free(next);*/
	ListErase(phead->next);
}


LTNode* ListFind(LTNode* phead, LTDatetype x)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}


void ListInsert(LTNode* pos, LTDatetype x)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = BuyListNode(x);

	// posPrev newnode pos
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}


void ListErase(LTNode* pos)
{
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
	pos = NULL;
}



void ListDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}

	free(phead);
	phead = NULL;
}
