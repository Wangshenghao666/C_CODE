#include<stdio.h>
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}*/
//&��λ�롣
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}���Ϊ2
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}���Ϊ-1
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}���Ϊ-3��


//�߼���������Ӧ�ã�����
//int main()
//{
//	int a = 5;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}���Ϊ0
//int main()
//{
//	int a = 0;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}Ϊ1
//int main()
//{
//	/*int a = 10;
//	int *p = &a;*/
//
//	int a = 5;
//	short s = 10;
//	printf("%d\n", sizeof(s = a + 2));---------------

//	printf("%d\n", s);
//	return 0;
//}���Ϊ2  10
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//360һ��������
//int main()
//{
//	/*int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);*/
//	//���Ϊ1 2 3 4
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//���Ϊ1 3 3 4
//	return 0;
//}
//����������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m = a > b ? a : b;
//	printf("m = %d\n", m);
//	return 0;
//}