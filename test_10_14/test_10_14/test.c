#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
�������������
��Ŀ1---
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
�������л������
1.str����p��ʱ����ֵ���ݣ�p��str����ʱ���������Ե�malloc���ٵĿռ���ʼ��ַ����p�е�ʱ��
����Ӱ��str,str��Ȼ��NULL��
2.��strʱNULL��strcpy���hello world������strָ��Ŀռ�ʱ������ͱ����ˡ���ΪNULLָ��ָ��
�Ŀռ�ʱ���ܱ�ֱ�ӷ��ʵ�
3.�����ڴ�й©
����1
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
����2
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




��Ŀ2---
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
��GetMemory�����ﴴ��������p�Ǿֲ���������ַ�ᱻ���٣�return p�᷵����ʼ��ַ������֮��p��ά����
�ռ䲻���ˣ�ֻ���Ҳ�������������ʧ�ˣ���
�������д�ӡ�������ֵ������������ǣ�����ջ�ռ��ַ�����⡣





��Ŀ3---
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
�ڴ�й©��һ��Ҫ�ǵ�free



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
}//�Ƿ������ڴ�



��������
�������������Ա�Ľṹ���ʹ�ã�Ҫ���malloc��ʹ��
#include<string.h>
#include<errno.h>
#include<stdlib.h>

1.
struct st_type
{
	int i;
	int a[];//���������Ա
};
int main()
{
	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));
	if (NULL == ps)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	//���ٳɹ�
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
	//a����Ŀռ䲻���ˣ�ϣ������Ϊ20����������
	struct st_type* ptr = (struct st_type*)realloc(ps, sizeof(struct st_type) + 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("��չ�ռ�ʧ��\n");
		return -1;
	}
	else
	{
		ps = ptr;
	}
	//ʹ��
	for (i = 0; i < 20; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", ps->a[i]);
	}
	//�ͷ�
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
	aָ��Ŀռ䲻���ˣ�ϣ�����Ե�����С
	int* ptr = (int*)realloc(ps->a, 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("����ʧ��\n");
		return -1;
	}
	else
	{
		ps->a = ptr;
	}
	ʹ��
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", ps->a[i]);
	}
	�ͷ�
	free(ps->a);
	ps->a = NULL;
	free(ps);
	ps = NULL;

	return 0;
}



