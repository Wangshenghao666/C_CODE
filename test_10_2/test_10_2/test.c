#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

strtok（切分字符串）
int main()
{
	char arr1[] = "wangshenghao@bitedu,tech";
	char arr2[100] = { 0 };//临时数据
	char sep = "@.";
	strcpy(arr2, arr1);
	strtok(arr2, sep);//分割字符
	//strtok(NULL, sep);//会在上一次查找的时候，接着查找下一个
	
	return 0;
}
巧妙用法
int main()
{
	char arr1[] = "wangshenghao@bitedu.tech";
	char arr2[100] = { 0 };
	char sep[] = "@.";
	strcpy(arr2, arr1);
	char* ret = NULL;
	for (ret = strtok(arr2, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}




memcpy内存拷贝
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	memcpy(arr2, arr1, 10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
模拟实现memcpy
void* my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return ret;
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
有问题，假如 12345678910 将1234拷贝到3456，会覆盖掉得到12125678910
memcpy--只要完成了不重叠的内存拷贝就完成了任务
内存拷贝时，出现内存重叠的现象，应该使用memmove

模拟实现memmove
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//前--->后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后--->前
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);

		}
	}
	return ret;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 16);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}





memset(内存设置)
void* memset(void* dest,int c,size_t count)
                  目标  改成什么   字符个数
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	memset(arr, 0, 24);
	return 0;
}