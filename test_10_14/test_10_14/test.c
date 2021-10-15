#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
几道经典笔试题
题目1---
void GetMemory(char *p) 
{
	p = (char *)malloc(100);
}
void Test(void) 
{
	char *str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}
int main()
{
	Test();
	return 0;
}//err
程序运行会崩溃！
1.str传给p的时候，是值传递，p是str的临时拷贝，所以当malloc开辟的空间起始地址放在p中的时候，
不会影响str,str依然是NULL；
2.当str时NULL，strcpy想把hello world拷贝到str指向的空间时，程序就崩溃了。因为NULL指针指向
的空间时不能被直接访问的
3.存在内存泄漏
改正1
void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello wold");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}
改正2
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello wold");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}




题目2---
char* GetMemory(void) 
{
	char p[] = "hello world";
	return p;
}
void Test(void) 
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}//err
在GetMemory函数里创建的数组p是局部变量，地址会被销毁，return p会返回起始地址，返回之后，p所维护的
空间不在了（只是找不到，而不是消失了）。
程序运行打印的是随机值！这类问题就是：返回栈空间地址的问题。





题目3---
void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
int main()
{
	Test();
	return 0;
}err
内存泄漏！一定要记得free



void Test(void) 
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}//非法访问内存



柔性数组
包含柔性数组成员的结构体的使用，要配合malloc来使用
#include<string.h>
#include<errno.h>
#include<stdlib.h>

1.
struct st_type
{
	int i;
	int a[];//柔性数组成员
};
int main()
{
	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));
	if (NULL == ps)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	//开辟成功
	ps->i = 100;//?
	int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	ps->a[i] = i;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", ps->a[i]);
	//}
	//a数组的空间不够了，希望调整为20个整型数据
	struct st_type* ptr = (struct st_type*)realloc(ps, sizeof(struct st_type) + 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("扩展空间失败\n");
		return -1;
	}
	else
	{
		ps = ptr;
	}
	//使用
	for (i = 0; i < 20; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", ps->a[i]);
	}
	//释放
	free(ps);
	ps = NULL;
	return 0;
}
2.
struct st_type
{
	int i;
	int* a;
};
int main()
{
	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type));
	ps->i = 100;
	ps->a = (int*)malloc(10 * sizeof(int));
	/*int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->a[i]);
	}*/
	a指向的空间不够了，希望可以调整大小
	int* ptr = (int*)realloc(ps->a, 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("扩容失败\n");
		return -1;
	}
	else
	{
		ps->a = ptr;
	}
	使用
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", ps->a[i]);
	}
	释放
	free(ps->a);
	ps->a = NULL;
	free(ps);
	ps = NULL;

	return 0;
}



