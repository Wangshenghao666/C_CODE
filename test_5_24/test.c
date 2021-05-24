#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//存储数据
	system("shutdown -s -t 60");//system()--专门用来执行系统命令的
	//关机
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s",input);//%s--字符串
	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是“我是猪”-strcmp--string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}