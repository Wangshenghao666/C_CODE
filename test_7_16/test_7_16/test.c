#define _CRT_SECURE_NO_WARNINGS 1
//switch语句
//形式：
//switch (整形表达式)
//{
//	语句项：
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期一 \n");
//	else if (2 == day)
//		printf("星期二 \n");
//	else if (3 == day)
//		printf("星期三 \n");
//	else if (4 == day)
//		printf("星期四 \n");
//	else if (5 == day)
//		printf("星期五 \n");
//	else if (6 == day)
//		printf("星期六 \n");
//	else if (7 == day)
//		printf("星期日 \n");
//
//	return 0;
//}
//运用case
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一 \n");
//	case 2:
//		printf("星期二 \n");
//	case 3:
//		printf("星期三 \n");
//	case 4:
//		printf("星期四 \n");
//	case 5:
//		printf("星期五 \n");
//	case 6:
//		printf("星期六 \n");
//	case 7:
//		printf("星期日 \n");
//	}
//	return 0;
//}
//case也可以这么用
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日 \n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日 \n");
//		break;
//	}
//	return 0;
//}

后面可以加
default:
	printf("输入错误\n");
	break;