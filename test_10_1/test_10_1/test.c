#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>


////模拟实现strcat
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到字符串的末尾\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加源字符串直至\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = { 'd', 'e', 'f', '\0' };
//	printf("%s\n",my_strcat(arr1, arr2));
//	return 0;
//}



//模拟实现strncpy函数
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest, src);
//	char* ret = dest;
//	while (n)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//		n--;
//
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "bit";
//	int n = 0;
//	printf("请输入拷贝的字符个数：\n");
//	scanf("%d", &n);
//	char * ret = my_strncpy(arr, p, n);
//	printf("%s\n", ret);
//	return 0;
//}//程序逻辑有问题，如果n > 拷贝的字符，跟msdn原理不符，
// //可见当要拷贝的字符个数n大于源串长度时，进行拷贝的字符串的尾部会附加若干个‘空字符’，知道长度等于n
// //改进
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (count && src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		count--;
//	}
//	if (count != 0)
//	{
//		while (count > 0)
//		{
//			*dest = '\0';
//			dest++;
//			count--;
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "bit";
//	int n = 0;
//	printf("请输入拷贝的字符个数：\n");
//	scanf("%d", &n);
//	char* ret = my_strncpy(arr, p, n);
//	printf("%s\n", ret);
//	return 0;
//}//逻辑正确，但整体简洁度很差，可以把第一个while循环部分加入判断条件
////优化
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	if (count > 0)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "bit";
//	int n = 0;
//	printf("请输入拷贝的字符个数：\n");
//	scanf("%d", &n);
//	char* ret = my_strncpy(arr, p, n);
//	printf("%s\n", ret);
//	return 0;
//}




////模拟实现strncat
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (1)
//	{
//		if (*dest == '\0')
//		{
//			break;
//		}
//		dest++;
//	}
//	for (size_t i = 0; i < num; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char str1[1024] = "I can sing";
//	char str2[] = "jump rap and basketball!!!";
//	char* p = my_strncat(str1, str2, 10);
//	printf("%s\n", p);
//	
//
//	return 0;
//}




////模拟实现strncmp
//int my_strncmp(const char* str1, const char* str2, int num)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if ((*str1 == '\0') || (num == 0))
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//		num--;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{ 
//		return -1;
//	}
//}
//int main()
//{
//	char a[] = "abcdefgyij";
//	char b[] = "abcdefguij";
//	printf("%d\n", my_strncmp(a, b, 8));
//	return 0;
//}




////srtstr字符串查找函数
//int main()
//{
//	char arr1[] = "i am good student,hehe student";
//	char arr2[] = "student";
//	//查找arr1中arr2第一次出现的位置
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到哦\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
////模拟实现strstr函数
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1;
//	char* s2;
//	char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	while (*cp != '\0')
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "i am good student,hehe student";
//	char arr2[] = "student";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}