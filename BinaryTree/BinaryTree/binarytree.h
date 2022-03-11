#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

BTNode* BuyNode(BTDataType x);//���ٽڵ�
BTNode* CreatBinaryTree();//�����ýڵ����

void PreOrder(BTNode* root);//ǰ�����
void InOrder(BTNode* root);//�������
void PostOrder(BTNode* root);//�������

int BinaryTreeSize(BTNode* root);//����ڵ����
int BinaryTreeLeafSize(BTNode* root);//����Ҷ�ӽڵ�ĸ���
int BinaryTreeLevelKSize(BTNode* root, int k);//��K��ڵ����
int BinaryTreeDepth(BTNode* root);// ���������/�߶�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);// ����������ֵΪx�Ľڵ�