#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()

{
	printf("************************************\n");
	printf("**********    1. play    ***********\n");
	printf("**********    0. exit    ***********\n");
	printf("************************************\n");
}
void game()
{
	char board[ROW][COL];//棋盘数组
	//初始化棋盘-board的元素给成的空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);//在次打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//在次打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}


	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n"); 
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
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
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}