#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
ģ��ʵ��strcpy���� strcpy---string copy---�ַ�������
int main()
{
	char arr1[] = "abcdef";//[a b c d e f \0]
	char arr2[10] = { 0 }; //[]
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}//�������ʵ��


�汾1
void my_strcpy(char* dest,char* src)//dest--ָ��Ŀ��ռ��  src--ָ���ַ�����
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;//����������\0ҲҪ����
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	return 0;
}


�汾2
void my_strcpy(char* dest,char* src)//dest--ָ��Ŀ��ռ��  src--ָ���ַ�����
{
	while (*src != '\0')
	{
		*dest++ = *src++;//����++������ʹ�ã���++
	}
	*dest = *src;//����������\0ҲҪ����
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	return 0;
}


�汾3
void my_strcpy(char* dest, char* src)
{
	//1 �����ַ���
	//2 ����\0ֹͣѭ��
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
�汾4
void my_strcpy(char* dest, char*src)
{
	assert(src != NULL);//����--release�汾�����Ż���
	assert(dest != NULL);//assertӦ����ͷ�ļ�<assert.h>

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



�汾5 const����
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


�汾6 ��������
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


ģ��ʵ��strlen����
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