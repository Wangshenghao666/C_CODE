#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;      //input���� �����
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
	scanf("%d", &input);//scanf���뺯��
	if (input == 1)     //if��� ����
		printf("��offer\n");
	else                //else���� ����
		printf("������\n");
	return 0;
}