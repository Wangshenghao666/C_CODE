#define _CRT_SECURE_NO_WARNINGS 1
//Leetcode--136��
//�ҳ�ֻ����һ�ε���
//���棺����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Σ��ҳ��ظ�ֻ������һ�ε�Ԫ�ء�
//������int a[]{1, 2, 3, 4, 5, 1, 2, 3, 4}; ��������ֻ��5����һ�Σ��������ֶ��ǳɶԳ��֣�Ҫ�ҳ�5��
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//�ҳ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)//ͳ��arr[i]��arr�����г����˼���
//	{
//		int count = 0;//������
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
//			printf("������%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//�����Ǳ������
//eg : 3 ^ 3 = 0  5 ^ 5 = 0  �Ƴ�a^a = 0
//	 0 ^ 5 = 5  0 ^ 3 = 3  �Ƴ�0^a = a
//	 3 ^ 5 ^ 3 = 5  3 ^ 3 ^ 5 = 5  �Ƴ���������㽻���ɵ�
//	 ����Ľ�
#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//�ҳ�����
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
	for (i = 0; i < sz; i++)//ͳ��arr[i]��arr�����г����˼���
	{
		ret = ret^arr[i];
	}
	printf("������%d\n", ret);
	return 0;
}
