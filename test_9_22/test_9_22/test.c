#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int *prt = (int*)(&a + 1);
//	//&a取出的是数组的地址，类型为int(*)[5]
//	//&a+1跳过整个数组
//	//（&a+1)要存到int*类型指针去，要强制类型转换
//	printf("%d,%d", *(a + 1),*(prt-1));//2  5
//	//*（a+1）这里数组名a是首元素的地址，类型为int*（a+1）跳过一个整型
//	return 0;
//}


////2
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x1是16进制的表现形式，即0x00000001,即为1
//	//p为结构体指针类型struct Test*,(p+1)跳过一个结构体（20byte)
//	//以%p格式打印地址（16进制）则为0x00100014
//	//注意：不是0x00100020   1*16+4*16的零次方
//	printf("%p\n", (unsigned long)p + 0x1);
//	//p被强制类型转换为整型，不是指针类型，不在考虑跳过多少，+1就是+1
//	//任何数据都可以%p十六进制打印，0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//p被强制类型转化为（unsigned int*）指针类型，在（unsigned int*)指针类型视角下
//	//(p+1)跳过的是p所指向类型的大小，即跳过一个unsigned int(4byte),即为0x00100004
//	return 0;
//}


////3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//int--- 4个字节    1---0x 00 00 00 01
//	//假设是小端字节序存储：低位放在低地址处，高位放在高地址处
//	int *ptr1 = (int *)(&a + 1);
//	//int(*)[4]强制类型转换为int*类型
//	//等价关系：ptr[-1]<--------->*(ptr-1)
//	int *ptr2 = (int *)((int)a + 1);
//	//数组名a为首元素的地址
//	//1.强制类型转换为int,即16进制不在当地址编号看待，而是当做整型
//	//2.强制类型转换为int*,再次以指针视角看待
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}//结果4 200000




////4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//逗号表达式从左向右依次执行，整个表达式的结果为最后一个表达式的结果
//	//则int a[3][2] = {(0,1),(2,3),(4,5)};就相当于 ={1,3,5}；
//	int *p;
//	p = a[0];
//	//a[0]为二维数组第一行数组名，不是以sizeof(a[0])和&a[0]形式出现，则表示首元素的地址
//	//即第一行这一行的首元素的地址，因此，p指向了二维数组第一行第一个元素
//	printf("%d", p[0]);
//	//p[0] <----->*(p+0) <----->*p
//	return 0;
//}//结果为1



////5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//p为数组指针，类型int(*)[4]
//
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//a为二维数组首元素（第一行）地址，类型为int(*)[5]
//	//指针-指针==两指着之间元素个数
//	return 0;
//}//结果0xfffffffc  -4
////-4原码：10000000 00000000 00000000 00000100
////  反码：11111111 11111111 11111111 11111011
////补码：  11111111 11111111 11111111 11111100 即0xfffffffc 




////6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}//结果10  5
//
//
//
////7
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}//结果 at




//8
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}//结果POINT ER ST EW