#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////练习1：计算n的阶乘。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}不考虑溢出问题


////练习2：计算阶乘相加。
//int main()
//{
//	int n = 0
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 6; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


////折半查找算法，eg找下标是7
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int k = 5;//要查找的元素
//	int flag = 0;//这个是找不到该怎么办
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("找到了，下标是：%d\n", mid);
//	else
//		printf("找不到\n");
//	return 0;
//}


#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//system("cls");//执行系统命令的 - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


int main()
{
	int i = 0;
	//假设真实的密码是:"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)//2个字符串的比较是不能使用==，应该是strcmp()
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}

	if (i == 3)
		printf("三次密码错误，退出登录\n");

	return 0;
}
1. 计算 n的阶乘。
2. 计算 1!+ 2!+ 3!+ …… + 10!
3. 在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0]
<= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x.
4. 编写代码，演示多个字符从两端移动，向中间汇聚。
5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
提示登录成，如果三次均输入错误，则退出程序