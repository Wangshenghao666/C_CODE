#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("**********   1. play    *******\n");
	printf("**********   0. exit    *******\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放雷的信息

	char show[ROWS][COLS] = { 0 };//存放排除雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL); 
	//DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL);//布置雷
	DisplayBoard(show, ROW, COL);


	FindMine(mine, show, ROW, COL);


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
	return 0;
}