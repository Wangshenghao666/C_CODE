#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void TestList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);
}
void TestList2()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
}
void TestList3()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	
	SListPrint(plist);
	
}
void TestList4()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);


	SListPrint(plist);

}

void TestList5()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 4);
	SListPrint(plist);

	// ��
	SLTNode* pos = SListFind(plist, 2);
	int i = 1;
	while (pos)
	{
		printf("��%d��pos�ڵ�:%p->%d\n", i++, pos, pos->data);
		pos = SListFind(pos->next, 2);
	}

	// �޸� 3->30
	pos = SListFind(plist, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListPrint(plist);

}
void TestList6()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 3);
	if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);
	 pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsert(&plist, pos, 10);
	}
	SListPrint(plist);
	 pos = SListFind(plist, 4);
	if (pos)
	{
		SListInsert(&plist, pos, 40);
	}
	SListPrint(plist);


}
void TestList7()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);
	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsertAfter(pos, 10);
	}
	SListPrint(plist); 
	pos = SListFind(plist, 4);
	if (pos)
	{
		SListInsertAfter(pos, 40);
	}
	SListPrint(plist);

}
void TestList8()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);
	SLTNode* pos = SListFind(plist, 4);
	if (pos)
	{
		SListErase(&plist,pos);
	}
	SListPrint(plist); 
	pos = SListFind(plist, 1);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

}
void TestList9()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListEraseAfter(pos);
	}
	SListPrint(plist);
}
int main()
{
	//TestList1();//����β��
	//TestList2();//����ͷ��
	//TestList3();//����βɾ
	//TestList4();//����ͷɾ
	//TestList5();//���Բ���
	//TestList6();//������ָ��λ�ò�������
	//TestList7();//������pos�ĺ����������
	//TestList8();//����posλ��ɾ��
	TestList9();//pos����һ��λ��ɾ��
	return 0;
}
