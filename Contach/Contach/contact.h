#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define  NAME_MAX 30
#define  SEX_MAX  5
#define  TELE_MAX 12
#define  ADDR_MAX 30
#define  MAX 1000


struct PoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};
struct Contact
{
	struct PoInfo data[MAX];
	int sz;
};

void InitContact(struct Contact* pc);//初始化
void AddContact(struct Contact* pc);//增加
void ShowContact(struct Contact* pc);//显示所有联系人
void DeleteContact(struct Contact* pc);//删除指定联系人
void SearchContact(const struct Contact* pc);//查找指定联系人
void ModifyContact(struct Contact* pc);//修改指定联系人