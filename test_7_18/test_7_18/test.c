#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////stdio.h ��һ��ͷ�ļ�������
////std ��׼ i intput o - output
////��׼�������ͷ�ļ�
//
//int main()
//{
//	//ʵ�����еĴ���
//	//��ӡhello world
//	//��ӡ���� - printf - �⺯�����⺯����ʹ�õ�����ͷ�ļ���
//	//
//	printf("hello world");
//	return 0;
//}
//

#include <stdio.h>
//��F10

//
//main ��C���Գ�������
//�����Ǵ�main�����ĵ�һ�п�ʼִ�е�
//main�������ҽ���һ��
// 
//C99 �������д��
//int main()
//{
//	return 0;
//}


//���ڵ�д��

//void main()
//{
//
//}


//int main()
//{
//	printf("�Ǻ�\n");
//	return 0;
//}


//ctrl + S - ����
//
//
//int main()
//{
//	//printf - %d - ��ӡ�з�����
//	//printf("%d\n", 100);
//
//	/*printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));*/
//
//	//int age = 20;//age ���ڴ��Ϸ���4���ֽڵĿռ�
//	char ch = 'w';//ch ���ڴ��з���1���ֽڵĿռ�
//
//	//Ǯ - 100 10000 10000000  100��
//	//���� - 0~200
//	short age;
//	//����  ������ = ֵ;
//	int salary = 10000;
//
//	return 0;
//}
//
//int main()
//{
//	//int age = 20;
//	//float weight = 55.8;
//
//
//	return 0;
//}

//�����ķ���
//ȫ�ֱ���
//�ֲ�����

//ȫ�ֱ��� - �ڴ������ⲿ����ı�������ȫ�ֱ���
int a = 100;


//�ֲ�����������main�����ж���ı��� - err
//
//void test()
//{
//	int b = 10;
//}
//
//int main()
//{
//	//�ֲ����� - �ڴ�����(�����)�ڲ�����ı������Ǿֲ�����
//	int a = 10;
//	printf("a = %d\n", a);// �ֲ�������ȫ�ֱ�����ͻ��һ����������£��ֲ�����
//
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//printf()��������
//	//scanf()�����뺯��
//	//
//
//	//scanf����Ҫ����ʹ�ã��͵���scanf���ڵ�Դ�ļ��ĵ�һ�м��ϣ�#define _CRT_SECURE_NO_WARNINGS 1
//
//	scanf("%d %d", &num1, &num2);
//
//	sum = num1 + num2;
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//newc++file.cpp


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("����������Ҫ���м��������:>\n");
	while (~scanf("%d%d", &a, &b))
	{
		printf("a+b=%d\n", a + b);
	}
	return 0;
}