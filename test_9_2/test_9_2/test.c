#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 0x11223344;
	short b = 0x5566;
	return 0;
}//看内存识别大小端
百度2015年系统工程师笔试题：设计一个小程序来判断当前机器的字节序（是大端还是小端）
int main()
{
	int a = 1;
	char* p =(char*) &a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
不够好，用函数的形式来写
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	//如果是大端返回0，小端返回1；
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
代码改动，简洁一下
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return (*p);//直接返回if=*p
}
int main()
{
	
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
还可以继续简洁
int check_sys()
{
	int a = 1;
	
	return *(char*)&a;//不用另外在存一个地址，直接解引用返回值
}
int main()
{

	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
