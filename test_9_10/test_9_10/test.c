#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("**************************\n");
	printf("*******1.add  2.sub*******\n");
	printf("*******3.mul  4.div*******\n");
	printf("*******0.exit      *******\n");
	printf("**************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
} 
int main()
{
	
	int input = 0;
	int x = 0;

	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			printf("������������������>");
			scanf("%d %d", &x, &y);
			ret = Add(x,y);
			printf("ret = %d\n", ret);
			break;
		case 2:
			printf("������������������>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("������������������>");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("������������������>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);
	return 0;

}
�Ľ�
void menu()
{
	printf("***************************\n");
	printf("******1.add   2.sub    ****\n");
	printf("******3.mul   4.div    ****\n");
	printf("******0.exit           ****\n");
	printf("***************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
		if (input == 0)
		{
			printf("�˳�\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����������������\n");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}
������һ�ְ汾
void menu()
{
	printf("*******************************\n");
	printf("********1.add   2.sub     *****\n");
	printf("********3.mul   4.div     *****\n");
	printf("********0.exit            *****\n");
	printf("*******************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������������������>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("ret = %d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;

}//�ص�����