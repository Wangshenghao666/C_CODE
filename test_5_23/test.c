#define _CRT_SECURE_NO_WARNINGS 1
//Leetcode--136题
//找出只出现一次的数
//题面：给定一个非空整型数组，除了某个元素只出现一次以外，其余每个元素均出现两次，找出呢个只出现了一次的元素。
//样例：int a[]{1, 2, 3, 4, 5, 1, 2, 3, 4}; 该数组中只有5出现一次，其他数字都是成对出现，要找出5。
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//找出单身狗
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)//统计arr[i]在arr数组中出现了几次
//	{
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//以上是暴力求解
//eg : 3 ^ 3 = 0  5 ^ 5 = 0  推出a^a = 0
//	 0 ^ 5 = 5  0 ^ 3 = 3  推出0^a = a
//	 3 ^ 5 ^ 3 = 5  3 ^ 3 ^ 5 = 5  推出异或是满足交换律的
//	 下面改进
#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//找出单身狗
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
	for (i = 0; i < sz; i++)//统计arr[i]在arr数组中出现了几次
	{
		ret = ret^arr[i];
	}
	printf("单身狗：%d\n", ret);
	return 0;
}
