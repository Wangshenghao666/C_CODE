#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContact(struct Contact* pc)
{
	pc->sz = 0;//Ĭ��û����Ϣ
	memset(pc->data, 0, MAX*sizeof(struct PoInfo));
}
void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺>");
		scanf("%d", &pc->data[pc->sz].age);
		printf("�������Ա�>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pc->sz].addr);
		printf("��ӳɹ�\n");
		pc->sz++;
	}
}
void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
FindContactByName(const struct Contact* pc,const char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)//�����ַ��Ƚ�
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}
void DeleteContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[NAME_MAX];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);//���ң���װ�����������޸�ҲҪ�õ���

	if (pos == -1)
	{
		printf("ָ������ϵ�˲�����\n");
	}
	else
	{
		//ɾ����ϵ��
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ���ҵ����֣�>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("���޴���\n");
	}
	else
	{
	
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n", "name", "age", "sex", "tele", "addr");
		
		
			printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
		
	}
}
void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ�޸��˵����֣�>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("�������µ����֣�>");
		scanf("%s", pc->data[pos].name);
		printf("�������µ����䣺>");
		scanf("%d", &pc->data[pos].age);
		printf("�������µ��Ա�>");
		scanf("%s", pc->data[pos].sex);
		printf("�������µĵ绰��>");
		scanf("%s", pc->data[pos].tele);
		printf("�������µĵ�ַ��>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
		
	}
}
