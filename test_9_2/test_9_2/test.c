#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 0x11223344;
	short b = 0x5566;
	return 0;
}//���ڴ�ʶ���С��
�ٶ�2015��ϵͳ����ʦ�����⣺���һ��С�������жϵ�ǰ�������ֽ����Ǵ�˻���С�ˣ�
int main()
{
	int a = 1;
	char* p =(char*) &a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
�����ã��ú�������ʽ��д
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
	//����Ǵ�˷���0��С�˷���1��
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
����Ķ������һ��
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return (*p);//ֱ�ӷ���if=*p
}
int main()
{
	
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
�����Լ������
int check_sys()
{
	int a = 1;
	
	return *(char*)&a;//���������ڴ�һ����ַ��ֱ�ӽ����÷���ֵ
}
int main()
{

	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
