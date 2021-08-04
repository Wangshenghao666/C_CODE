#define _CRT_SECURE_NO_WARNINGS 1
猜数字游戏
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
	//1. 生成随机数
	int ret = rand()%100+1;//0~99 + 1 --> 1~100
	//printf("%d\n", ret);
	//2. 猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	//设置随机数的生成起点-不要频繁调用
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);//1
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);

	return 0;
}