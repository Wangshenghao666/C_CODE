#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.����1��5������ǡ�weekday��
//2.����6��7������ǡ�weekend��
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2 :
//	case 3 :
//	case 4 :
//	case 5 :
//			  printf("weekday\n");
//		  break;
//	 case 6:
//	 case 7 :
//		  printf("weekend\n");
//			break;
//	}
//	return 0;
//}


//forѭ�������ã���ࣩ
//�﷨��for(���ʽ1�����ʽ2�����ʽ3)1����ʼ�� 2�������ж� 3����������
        //ѭ����䣺
//������ʹ��forѭ������Ļ�ϴ�ӡ1-10������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//break��continue���÷�
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}��ӡ���01234 break��������ѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}��ӡ���1234678910������continue���治�ÿ�������ʼ


//for���Ľ��飺
//1 ������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
//2 ����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д����
//3 forѭ���ĳ�ʼ�� ���� �ж϶�����ʡ�ԡ����ǣ�forѭ�����жϲ��ֱ�ʡ�ԣ����жϲ��ֺ�Ϊ�档
//4 ������Ǻ������������Ҳ�Ҫ���ʡ�ԡ�


//һ��������
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}��ӡ�����û�У���Ϊ�жϲ���=0Ϊ��


//do whileѭ��
//�﷨��do 
//       ѭ����䣺
//while (���ʽ)��
//eg:��ӡ1-10������
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}break��continue�÷�һ����


