#define _CRT_SECURE_NO_WARNINGS 1
//2020��Ʒ������C++������
//�������������α�����

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;//�൱�ڿ�ƿ
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	c = a;//1
//	a = b;//2
//	b = c;//3
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

////��������е���������
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}//���ַ���ֻ�ܽ�����ֽ�С�����⣬���ܽ�����ֽϴ�����⡣
////����������������⡣int--4���ֽ�--32bitλ--���������ֵ

//����Ľ�
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("������a=%d b=%d\n", a, b);
	return 0;
}//��������ģ���û��ʹ�õ�����������
//����