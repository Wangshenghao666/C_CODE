#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void Menu()
{
	printf("*********************************\n");
	printf("��ѡ����Ĳ�����\n");
	printf("1.ͷ��   2.ͷɾ \n");
	printf("3.β��   4.βɾ \n");
	printf("5.��ӡ   -1.�˳�\n");
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
			printf("��������Ҫͷ������ݣ���-1����");
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
			printf("��������Ҫβ������ݣ���-1����");
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
			printf("�޴�ѡ����������룺\n");
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