#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void Menu()
{
	printf("*********************************\n");
	printf("请选择你的操作：\n");
	printf("1.头插   2.头删 \n");
	printf("3.尾插   4.尾删 \n");
	printf("5.打印   -1.退出\n");
	printf("*********************************\n");
}
void MenuTest()
{
	SL s1;
	SeqListInit(&s1);
	int input = 0;
	int x;
	while (input != -1)
	{
		Menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("请输入你要头插的数据，以-1结束");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqListPushFront(&s1, x);
				scanf("%d", &x);

			}
			break;
		case 2:
			SeqListPopFront(&s1);
			break;
		case 3:
			printf("请输入你要尾插的数据，以-1结束");
			while (x != -1)
			{
				SeqListPushFront(&s1, x);
				scanf("%d", &x);
			}
			break;
		case 4:
			SeqListPopBack(&s1);
			break;
		case 5:
			SeqListPrint(&s1);
			break;
		default :
			printf("无此选项，请重新输入：\n");
			break;
		}

	}
	SeqListDestory(&s1);

}
int main()
{
	MenuTest();

	return 0;
}


//void TestSeqList()
//{
//	SL s1;
//	SeqListInit(&s1);
//	SeqListPushBack(&s1, 1);
//	SeqListPushBack(&s1, 2);
//	SeqListPushBack(&s1, 3);
//	SeqListPushBack(&s1, 4);
//	SeqListPushBack(&s1, 5);
//
//	SeqListPrint(&s1);
//
//	SeqListInsert(&s1, 2, 30);
//	SeqListPrint(&s1);
//
//	int pos = SeqListFind(&s1, 4);
//	if (pos != -1)
//	{
//		SeqListInsert(&s1, pos, 40);
//	}
//	SeqListPrint(&s1);
//
//	SeqListDestory(&s1);
//}
//int main()
//{
//	TestSeqList();
//	return 0;
//}