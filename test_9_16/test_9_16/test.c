#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


数组名：
1.sizeof(数组名)--数组名表示整个数组，计算的是整个数组的大小，单位是字节
2.&数组名---数组名表示整个数组，取出的是整个数组的地址
----除此之外，所有的数组名都是数组首元素的地址


一维数组
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//数组名a单独放在sizeof内部，数组名表示整个数组，计算的是整个数组的大小
	printf("%d\n", sizeof(a + 0));//a表示首元素的地址，a+0也是表示首元素的地址，地址的大小是4/8个字节
	printf("%d\n", sizeof(*a));//a表示首元素的地址，*a就是首元素-->a[0],大小是4个字节   *a <==> *(a+0) <==> a[0]
	printf("%d\n", sizeof(a + 1));//a是首元素的地址,a+1是第二元素的地址，大小是4/8
	printf("%d\n", sizeof(a[1]));//表示第2个元素，大小是4
	printf("%d\n", sizeof(&a));//数组的地址（4/8）int(*)[4]
	printf("%d\n", sizeof(*&a)); //&a是数组的地址，对数组的地址解引用拿到的是数组，所以大小时候16
	printf("%d\n", sizeof(&a + 1));//&a是数组的地址，&a+1 是数组的地址+1，跳过整个数组，虽然跳过了数组，还是地址  4/8
	printf("%d\n", sizeof(&a[0])); 4 / 8
	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址 4/8
	return 0;
}



字符数组
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//是首元素的地址（4/8）
	printf("%d\n", sizeof(*arr));//arr是地址 *arr解引用（char*)    1
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
	//上面几个是随机值
	char arr[] = "abcdef";
	//数组里面放的是：a b c d e f \0
	printf("%d\n", sizeof(arr));//7字节
	printf("%d\n", sizeof(arr + 0));//arr是首元素的地址，4/8
	printf("%d\n", sizeof(*arr));//arr是首元素的地址，*arr就是首元素  1
	printf("%d\n", sizeof(arr[1]));//arr[1]就是第二个元素  1
	printf("%d\n", sizeof(&arr));//&arr是数组的地址，数组的地址也是地址，就是4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5


	char *p = "abcdef";//常变量不能被修改，应在前面加个const
	printf("%d\n", sizeof(p));//p是一个指针变量  4/8
	printf("%d\n", sizeof(p + 1));//p+1是字符b的地址  4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//p[0]-->*(p+0)-->*p   1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}




二维数组
int main()
{

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//二维数组3行4列，每个是int类型，所以是48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//每行看成一个一维数组，16(a[0]是第一行的数组名，数组名单独放在sizeof内部）
	printf("%d\n", sizeof(a[0] + 1));//4/8
	arr[0]是第一行的数组的数组名，并没有单独放在sizeof内部，也没有&地址，所以arr[0]+1表示首元素的地址，就是第一行这个数组的首元素的地址，所以就是第一行第二个元素的地址

	printf("%d\n", sizeof(*(a[0] + 1)));//就是第一行第二个元素   4
	printf("%d\n", sizeof(a + 1));//4/8   数组名a并没有单独放在sizeof内部，也没有&，所以a表示首元素（第一行）的地址，所以a+1就是第二行的地址\
	a+1 -- >&a[1]

	printf("%d\n", sizeof(*(a + 1)));//就是第二行  16    *(a + 1)--->a[1]

	printf("%d\n", sizeof(&a[0] + 1));//4/8
	a[0]是第一行的数组名
	&a[0]是拿到第一行的地址
	&a[0]+1  就是第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//*(&a[0] + 1)--->a[1]  16
	printf("%d\n", sizeof(*a));//a表示首元素的地址，*a就是第一行，相当于第一行的数组名
	printf("%d\n", sizeof(a[3]));
	a[3]假设存在，就是第四行的数组名，sizeof(a[3]),就相当于把第四行的数组名单独放在sizeof内部
	return 0;
}
