#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdio.h>
//void reverse_string(char * str)
//{
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char str[])
//{
//	int len = my_strlen(str);
//	char tmp = str[0];
//	str[len - 1] = tmp;
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//数组
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n",& arr[i]);
//	}
//	return 0;
//}
//数组随着下标的增长，地址是由低到高的变话
//二维数组的基本访问
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3 }, { 4, 5, 6 },{7, 8, 9, 9} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//打印地址
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3 }, { 4, 5 }, { 6, 7, 8, 9, 0 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9, 0 } };
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}