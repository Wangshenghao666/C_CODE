#define _CRT_SECURE_NO_WARNINGS 1
#include"HP.h"

void Test1()
{
	int a[] = { 70, 56, 30, 25, 15, 10, 75 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		HeapPush(&hp,a[i]);
	}
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);
}

int main()
{
	Test1();
	//Test2();
	return 0;
}