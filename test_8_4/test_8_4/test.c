#define _CRT_SECURE_NO_WARNINGS 1
��������Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*****************************\n");
	printf("*********  1. play  *********\n");
	printf("*********  0. exit  *********\n");
	printf("*****************************\n");
}
void game()
{
	int guess = 0;
	//1. ���������
	int ret = rand()%100+1;//0~99 + 1 --> 1~100
	//printf("%d\n", ret);
	//2. ������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	//������������������-��ҪƵ������
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);//1
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}