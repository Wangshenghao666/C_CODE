#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


��������
1.sizeof(������)--��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
2.&������---��������ʾ�������飬ȡ��������������ĵ�ַ
----����֮�⣬���е�����������������Ԫ�صĵ�ַ


һά����
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//������a��������sizeof�ڲ�����������ʾ�������飬���������������Ĵ�С
	printf("%d\n", sizeof(a + 0));//a��ʾ��Ԫ�صĵ�ַ��a+0Ҳ�Ǳ�ʾ��Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	printf("%d\n", sizeof(*a));//a��ʾ��Ԫ�صĵ�ַ��*a������Ԫ��-->a[0],��С��4���ֽ�   *a <==> *(a+0) <==> a[0]
	printf("%d\n", sizeof(a + 1));//a����Ԫ�صĵ�ַ,a+1�ǵڶ�Ԫ�صĵ�ַ����С��4/8
	printf("%d\n", sizeof(a[1]));//��ʾ��2��Ԫ�أ���С��4
	printf("%d\n", sizeof(&a));//����ĵ�ַ��4/8��int(*)[4]
	printf("%d\n", sizeof(*&a)); //&a������ĵ�ַ��������ĵ�ַ�������õ��������飬���Դ�Сʱ��16
	printf("%d\n", sizeof(&a + 1));//&a������ĵ�ַ��&a+1 ������ĵ�ַ+1�������������飬��Ȼ���������飬���ǵ�ַ  4/8
	printf("%d\n", sizeof(&a[0])); 4 / 8
	printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ 4/8
	return 0;
}



�ַ�����
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//����Ԫ�صĵ�ַ��4/8��
	printf("%d\n", sizeof(*arr));//arr�ǵ�ַ *arr�����ã�char*)    1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	//���漸�������ֵ
	char arr[] = "abcdef";
	//��������ŵ��ǣ�a b c d e f \0
	printf("%d\n", sizeof(arr));//7�ֽ�
	printf("%d\n", sizeof(arr + 0));//arr����Ԫ�صĵ�ַ��4/8
	printf("%d\n", sizeof(*arr));//arr����Ԫ�صĵ�ַ��*arr������Ԫ��  1
	printf("%d\n", sizeof(arr[1]));//arr[1]���ǵڶ���Ԫ��  1
	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ������ĵ�ַҲ�ǵ�ַ������4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5


	char *p = "abcdef";//���������ܱ��޸ģ�Ӧ��ǰ��Ӹ�const
	printf("%d\n", sizeof(p));//p��һ��ָ�����  4/8
	printf("%d\n", sizeof(p + 1));//p+1���ַ�b�ĵ�ַ  4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//p[0]-->*(p+0)-->*p   1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}




��ά����
int main()
{

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//��ά����3��4�У�ÿ����int���ͣ�������48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//ÿ�п���һ��һά���飬16(a[0]�ǵ�һ�е�����������������������sizeof�ڲ���
	printf("%d\n", sizeof(a[0] + 1));//4/8
	arr[0]�ǵ�һ�е����������������û�е�������sizeof�ڲ���Ҳû��&��ַ������arr[0]+1��ʾ��Ԫ�صĵ�ַ�����ǵ�һ������������Ԫ�صĵ�ַ�����Ծ��ǵ�һ�еڶ���Ԫ�صĵ�ַ

	printf("%d\n", sizeof(*(a[0] + 1)));//���ǵ�һ�еڶ���Ԫ��   4
	printf("%d\n", sizeof(a + 1));//4/8   ������a��û�е�������sizeof�ڲ���Ҳû��&������a��ʾ��Ԫ�أ���һ�У��ĵ�ַ������a+1���ǵڶ��еĵ�ַ\
	a+1 -- >&a[1]

	printf("%d\n", sizeof(*(a + 1)));//���ǵڶ���  16    *(a + 1)--->a[1]

	printf("%d\n", sizeof(&a[0] + 1));//4/8
	a[0]�ǵ�һ�е�������
	&a[0]���õ���һ�еĵ�ַ
	&a[0]+1  ���ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//*(&a[0] + 1)--->a[1]  16
	printf("%d\n", sizeof(*a));//a��ʾ��Ԫ�صĵ�ַ��*a���ǵ�һ�У��൱�ڵ�һ�е�������
	printf("%d\n", sizeof(a[3]));
	a[3]������ڣ����ǵ����е���������sizeof(a[3]),���൱�ڰѵ����е���������������sizeof�ڲ�
	return 0;
}
