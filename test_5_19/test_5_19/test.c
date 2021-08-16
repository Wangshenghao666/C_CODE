#define _CRT_SECURE_NO_WARNINGS 1
//20000行代码   有效的代码,循环语句
#include<stdio.h>
#include<string.h>

int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
		printf("敲一行代码：%d\n" ,line);
		line++;
	}
	if (line >= 20000)
		printf("好offer\n");
	return 0;
}