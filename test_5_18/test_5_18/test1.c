#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;      //input输入 输入框
	printf("加入比特\n");
	printf("你要好好学习吗？（1/0）>:");
	scanf("%d", &input);//scanf输入函数
	if (input == 1)     //if如果 假如
		printf("好offer\n");
	else                //else其他 另外
		printf("卖红薯\n");
	return 0;
}