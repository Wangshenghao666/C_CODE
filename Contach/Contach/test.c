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
	struct Contact con;//创建一个通讯录
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请输入选择：>");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}