#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
void menu()
{
	printf("*********************************************************\n");
	printf("***************  1. add      2. delete   ****************\n");
	printf("***************  3. search   4. modify   ****************\n");
	printf("***************  5. show     6. sort     ****************\n");
	printf("***************  0. exit                 ****************\n");
	printf("*********************************************************\n");

}
enum Option
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
int main()
{
	int input = 0;
	struct Contact con;//����һ��ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}