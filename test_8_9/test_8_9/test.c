#define _CRT_SECURE_NO_WARNINGS 1
//�����ַ���
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);//���Ҫ���� char* ret = strcpy(arr1,arr2)
//	printf("%s\n", arr1);
//	return 0;
//}
//�ڴ����ã������ڴ�飬ǰ�����ֽ�Ϊ��λ��
//#include<stdio.h> 
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bie";//�ñ��xxxxx bit
//	char* ret =(char*) memset(arr, 'x', 5);
//	printf("%s\n", ret);
//	return 0;
//}
//���������Զ��庯��
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//
//}
//��ʹ�ú����������α���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}
//ʹ�ú������������α���
//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d b = %d\n", a, b);//ʵ��a��b�������β�x,y��ʱ���βν���ʵ�ε�һ����ʱ�������ı��βα���x,y���ǲ���Ӱ��a b.
//	Swap(a, b);
//	printf("������a = %d b = %d\n", a, b);
//
//	return 0;
//}��ӡ��������⣬����һ�¡�
//����ָ������������
//void Swap(int * px, int * py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}

//���ú���ʵ��100��200֮�������
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}