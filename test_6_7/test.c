#define _CRT_SECURE_NO_WARNINGS 1
////分支语句（选择结构）
////if语句
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}

////解释一下：如果表达式的结果为真，则语句执行。
////在C语言中如何表示真假？0表示假，非0表示真。
////如果条件成立，要执行多条语句，应该怎么使用代码块。
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else 
//			printf("老不死\n");
//	}
//	return 0;
//}

////悬空else
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	  if (b == 2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
////结果为无。。。else和离他最近的未匹配的if进行匹配。
