#define _CRT_SECURE_NO_WARNINGS 1
//20000�д���   ��Ч�Ĵ���,ѭ�����
#include<stdio.h>
#include<string.h>

int main()
{
	int line = 0;
	printf("�������\n");
	while (line < 20000)
	{
		printf("��һ�д��룺%d\n" ,line);
		line++;
	}
	if (line >= 20000)
		printf("��offer\n");
	return 0;
}