#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");//�������룬�������password������
//	scanf("%s", password);
//	//��������ʣ��һ��'\n '
//	//��ȡһ��'\n'
//	getchar();
//	printf("��ȷ�ϣ�Y / N):>");
//	int ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int tem = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//���������������ַ����ĳ�ѭ����
//	while ((tem = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y / N):>");
//	int ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
// 
//ʵ��һ����������ӡ�˷��ھ����ھ�������������Լ�����
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	
//	return 0;
//}
//�ַ������򣨳��棩
//#include<string.h>
//void reverse_string(char *str)
//{
//	int len = strlen(str);
//	int left = 0;//'a'
//	int right = len - 1;//'f'
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char arr[20] = { "abcdef" };
//	//����������Ԫ�صĵ�ַ
//	//��Ԫ�ؾ���char����
//	//char *
//	reverse_string(arr);
//	printf("%s\n", arr);//���������fedcba
//
//	return 0;
//}
//�ݹ�汾
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
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//		str[len - 1]  = tmp;
//}
//int main()
//{
//	char arr[20] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	
//	unsigned int num = 1234;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//��дһ������ʵ��N��K�η���ʹ�õݹ�
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 2;
//	int k = 3;
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
