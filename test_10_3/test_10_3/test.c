#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��̬�ڴ���亯������
//int main()
//{
//	int *p = (int*)malloc(40);//����ռ�
//	if (p == NULL)
//	{
//		return -1;
//	}
//	int i = 0;//���ٿռ䣨��ֵ��
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);//�ͷſռ�
//	p = NULL;
//	return 0;;
//}

#include<string.h>
#include<errno.h>
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//���ش�����Ϣ
//		return -1;
//
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//malloc����ֻ�����ڶ���������ռ䣬���ҷ�����ʼ��ַ������ʼ���ڴ�ռ䣡
//calloc�����ڶ���������ռ䣬���ҳ�ʼ��Ϊ0��������ʼ��ַ��


//
//int main()
//{
//	//����10���ڴ�ռ�
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	//����ɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//�ռ䲻���ˣ����ӿռ���20��int
//	int *ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//	{
//		return -1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc�����ĳ����ö�̬�ڴ�����������ʱ���ǻᷢ�ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�ֻ��������
//�Ŀռ���ڴ���Ϊ�˺�����ڴ棬����һ������ڴ�Ĵ�С������������realloc�����Ϳ��������Զ�̬
//�����ڴ��С������




//�����Ķ�̬�ڴ����
//1.��NULLָ��Ľ����ò���

//void test()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;
//	free(p);
//}
////Ҫ�ж�һ��
//if (p == NULL)
//{
//	return -1;//��ס��һ��Ҫ�жϡ�
//}

//2.�Զ�̬�ڴ��Խ�����
//void test()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}

//int main()
//{
//	int *p = (int*)malloc(200);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 80; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 80; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
////��������������ַǷ����ʣ�Խ����ʣ�����Ϊmalloc������200���ֽڵĿռ䣬����ʹ�õ�ʱ���õ�
////80��int�����α������ܹ�320�ֽڣ����Ի�Խ�����


//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//4.ʹ��free�ͷ�һ�鶯̬�ڴ��һ����
//int main()
//{
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return -1;
//
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//�������Ϊerr�������ṩ��ʼ��ַ���������

//5.��ͬһ��̬�ڴ��ͷ�

//6.��̬�����ڴ������ͷţ�����ڴ�й©��

