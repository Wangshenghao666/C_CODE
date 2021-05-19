#define _CRT_SECURE_NO_WARNINGS 1

//创建函数，写一个函数求两个数的较大值。
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
int num1 = 10;
int num2 = 20;
int max = 0;
max = Max(num1, num2);
printf("max=%d\n", max);
return 0;

}