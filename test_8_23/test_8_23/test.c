#include<stdio.h>
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}*/
//&按位与。
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}结果为2
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}结果为-1
//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}结果为-3、


//逻辑反操作的应用（！）
//int main()
//{
//	int a = 5;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}结果为0
//int main()
//{
//	int a = 0;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}为1
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
//}结果为2  10
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//360一道笔试题
//int main()
//{
//	/*int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);*/
//	//结果为1 2 3 4
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//结果为1 3 3 4
//	return 0;
//}
//条件操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m = a > b ? a : b;
//	printf("m = %d\n", m);
//	return 0;
//}