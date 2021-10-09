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

void InitContact(struct Contact* pc);//��ʼ��
void AddContact(struct Contact* pc);//����
void ShowContact(struct Contact* pc);//��ʾ������ϵ��
void DeleteContact(struct Contact* pc);//ɾ��ָ����ϵ��
void SearchContact(const struct Contact* pc);//����ָ����ϵ��
void ModifyContact(struct Contact* pc);//�޸�ָ����ϵ��