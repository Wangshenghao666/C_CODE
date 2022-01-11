#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
void TestList1()
{
	LTNode* plist = ListInit();
	
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	ListPrint(plist);
}
void TestList2()
{
	LTNode* plist = ListInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPrint(plist);
}
void TestList3()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPrint(plist);

	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

}
void TestList4()
{
	LTNode* plist = ListInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

	LTNode* pos = ListFind(plist, 2);
	if (pos)
	{
		ListErase(pos);
	}
	ListPrint(plist);


	ListDestroy(plist);
	plist = NULL;
}
int main()
{
	//TestList1();//≤‚ ‘≥ı ºªØ£¨Œ≤≤Â£¨¥Ú”°
	//TestList2();//≤‚ ‘Œ≤…æ
	//TestList3();//≤‚ ‘Õ∑≤Â£¨Õ∑…æ
	TestList4();//≤‚ ‘∏¥”√Õ∑Œ≤…æ≥˝
	return 0;
}              