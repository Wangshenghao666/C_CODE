#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

strtok���з��ַ�����
int main()
{
	char arr1[] = "wangshenghao@bitedu,tech";
	char arr2[100] = { 0 };//��ʱ����
	char sep = "@.";
	strcpy(arr2, arr1);
	strtok(arr2, sep);//�ָ��ַ�
	//strtok(NULL, sep);//������һ�β��ҵ�ʱ�򣬽��Ų�����һ��
	
	return 0;
}
�����÷�
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




memcpy�ڴ濽��
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
ģ��ʵ��memcpy
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
�����⣬���� 12345678910 ��1234������3456���Ḳ�ǵ��õ�12125678910
memcpy--ֻҪ����˲��ص����ڴ濽�������������
�ڴ濽��ʱ�������ڴ��ص�������Ӧ��ʹ��memmove

ģ��ʵ��memmove
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//ǰ--->��
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//��--->ǰ
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





memset(�ڴ�����)
void* memset(void* dest,int c,size_t count)
                  Ŀ��  �ĳ�ʲô   �ַ�����
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	memset(arr, 0, 24);
	return 0;
}