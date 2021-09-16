#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
回忆冒泡排序
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
	bubble_sort(arr, sz);//排序自定义函数
	print(arr, sz);//打印自定义函数
	return 0;
}



void qsort(void *base,
	       size_t num,//待排序的元素个数
		   size_t width,//一个元素的大小，单位是字节
		   int( *cmp)(const void *e1, const void *e2));//cmp指向的是：排序时，用来比较元素的函数



//应用

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
}排序整形数组


#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//strcmp函数需要引头文件

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
	struct Stu s[3] = { { "zhangsan", 15 }, { "lisi", 30 }, { "wangwu", 20 } };//按名字来排序

	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_name);
	//print(s, sz);
}
int main()
{
	test();
	return 0;
}

排序年龄
struct Stu
{
	char name[20];
	int age;
};
int cmp_by_age(const void *e1, const void *e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//strcmp函数需要引头文件

}

void test()
{
	struct Stu s[3] = { { "zhangsan", 15 }, { "lisi", 30 }, { "wangwu", 20 } };//按名字来排序

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
void BubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void*e1, const void*e2))//使用回调函数实现一个通用的冒泡排序函数
{
	size_t i = 0;//趟数
	for (i = 0; i < num; i++)
	{
		size_t j = 0;//比较对数
		for(j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//交换
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
	BubbleSort(arr, sz, sizeof(arr[0]),cmp_int);//测试自定义BubbleSort();
	print(arr, sz);
}

int main()
{
	test();
	
	return 0;
}





