#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////��ϰ1������n�Ľ׳ˡ�
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
//}�������������


////��ϰ2������׳���ӡ�
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


////�۰�����㷨��eg���±���7
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int k = 5;//Ҫ���ҵ�Ԫ��
//	int flag = 0;//������Ҳ�������ô��
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
//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//	else
//		printf("�Ҳ���\n");
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
//		//system("cls");//ִ��ϵͳ����� - �����Ļ
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
	//������ʵ��������:"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)//2���ַ����ıȽ��ǲ���ʹ��==��Ӧ����strcmp()
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}

	if (i == 3)
		printf("������������˳���¼\n");

	return 0;
}
1. ���� n�Ľ׳ˡ�
2. ���� 1!+ 2!+ 3!+ ���� + 10!
3. ��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0]
<= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x.
4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
��ʾ��¼�ɣ�������ξ�����������˳�����