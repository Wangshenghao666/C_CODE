#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void TestStack1()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
  	StackPush(&st, 3);
	StackPush(&st, 4);
}
void TestStack2()
{
	ST st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	printf("%d ", StackTop(&st));
	StackPop(&st);
	printf("%d ", StackTop(&st));
	StackPop(&st);

	StackPush(&st, 5);
	StackPush(&st, 6);


	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	StackDestroy(&st);
}
int main()
{
	//TestStack1();
	TestStack2();
	return 0;
}