#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
模拟实现strcpy函数 strcpy---string copy---字符串拷贝
int main()
{
	char arr1[] = "abcdef";//[a b c d e f \0]
	char arr2[10] = { 0 }; //[]
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}//最基础的实现


版本1
void my_strcpy(char* dest,char* src)//dest--指向目标空间的  src--指向字符串的
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;//函数拷贝连\0也要拷贝
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	return 0;
}


版本2
void my_strcpy(char* dest,char* src)//dest--指向目标空间的  src--指向字符串的
{
	while (*src != '\0')
	{
		*dest++ = *src++;//后置++，是先使用，在++
	}
	*dest = *src;//函数拷贝连\0也要拷贝
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	return 0;
}


版本3
void my_strcpy(char* dest, char* src)
{
	//1 拷贝字符串
	//2 遇到\0停止循环
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	return 0;
}



#include<assert.h>
版本4
void my_strcpy(char* dest, char*src)
{
	assert(src != NULL);//断言--release版本可以优化掉
	assert(dest != NULL);//assert应该引头文件<assert.h>

	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}



版本5 const限制
void my_strcpy(char* dest,const char*src)
{
	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}


版本6 返回类型
char* my_strcpy(char* dest, const char*src)
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };
	char* ret = my_strcpy(arr2, arr1);
	printf("%s\n", ret);
	return 0;
}


模拟实现strlen函数
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}