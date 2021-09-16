#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
����ð������
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//�����Զ��庯��
	print(arr, sz);//��ӡ�Զ��庯��
	return 0;
}



void qsort(void *base,
	       size_t num,//�������Ԫ�ظ���
		   size_t width,//һ��Ԫ�صĴ�С����λ���ֽ�
		   int( *cmp)(const void *e1, const void *e2));//cmpָ����ǣ�����ʱ�������Ƚ�Ԫ�صĺ���



//Ӧ��

#include<stdlib.h>
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
	return 0;
}������������


#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//strcmp������Ҫ��ͷ�ļ�

}
void print(int s[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", s[i]);
	}
}
void test()
{
	struct Stu s[3] = { { "zhangsan", 15 }, { "lisi", 30 }, { "wangwu", 20 } };//������������

	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_name);
	//print(s, sz);
}
int main()
{
	test();
	return 0;
}

��������
struct Stu
{
	char name[20];
	int age;
};
int cmp_by_age(const void *e1, const void *e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//strcmp������Ҫ��ͷ�ļ�

}

void test()
{
	struct Stu s[3] = { { "zhangsan", 15 }, { "lisi", 30 }, { "wangwu", 20 } };//������������

	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_age);
}
int main()
{
	test();
	return 0;
}






int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i <width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		*buf1++;
		*buf2++;
	}
}
void BubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void*e1, const void*e2))//ʹ�ûص�����ʵ��һ��ͨ�õ�ð��������
{
	size_t i = 0;//����
	for (i = 0; i < num; i++)
	{
		size_t j = 0;//�Ƚ϶���
		for(j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);

			}
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz, sizeof(arr[0]),cmp_int);//�����Զ���BubbleSort();
	print(arr, sz);
}

int main()
{
	test();
	
	return 0;
}





