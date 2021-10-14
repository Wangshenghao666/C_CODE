#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//动态内存分配函数介绍
//int main()
//{
//	int *p = (int*)malloc(40);//申请空间
//	if (p == NULL)
//	{
//		return -1;
//	}
//	int i = 0;//开辟空间（赋值）
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);//释放空间
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
//		printf("%s\n", strerror(errno));//返回错误信息
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


//malloc函数只负责在堆区上申请空间，并且返回起始地址，不初始化内存空间！
//calloc函数在堆区上申请空间，并且初始化为0，返回起始地址！


//
//int main()
//{
//	//申请10个内存空间
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	//申请成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//空间不够了，增加空间至20个int
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
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc函数的出现让动态内存管理更加灵活。有时我们会发现过去申请的空间太小了，有时又会觉得申请
//的空间过于大，那为了合理的内存，我们一定会对内存的大小做灵活调整。那realloc函数就可以做到对动态
//开辟内存大小做调整




//常见的动态内存错误
//1.对NULL指针的解引用操作

//void test()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;
//	free(p);
//}
////要判断一下
//if (p == NULL)
//{
//	return -1;//记住，一定要判断。
//}

//2.对动态内存的越界访问
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
//		*(p + i) = i;//当i是10的时候越界访问
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
//	//使用
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
////上面这个代码会出现非法访问（越界访问），因为malloc开辟了200个字节的空间，但是使用的时候用到
////80个int的整形变量，总共320字节，所以会越界访问


//3.对非动态开辟内存使用free释放

//4.使用free释放一块动态内存的一部分
//int main()
//{
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return -1;
//
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//上面代码为err，必须提供起始地址，否则错误

//5.对同一动态内存释放

//6.动态开辟内存忘记释放（造成内存泄漏）

