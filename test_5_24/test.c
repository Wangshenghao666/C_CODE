#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//�洢����
	system("shutdown -s -t 60");//system()--ר������ִ��ϵͳ�����
	//�ػ�
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s",input);//%s--�ַ���
	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ��ǡ�������-strcmp--string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}