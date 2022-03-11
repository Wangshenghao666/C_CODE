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

BTNode* BuyNode(BTDataType x);//开辟节点
BTNode* CreatBinaryTree();//建立好节点个数

void PreOrder(BTNode* root);//前序遍历
void InOrder(BTNode* root);//中序遍历
void PostOrder(BTNode* root);//后序遍历

int BinaryTreeSize(BTNode* root);//计算节点个数
int BinaryTreeLeafSize(BTNode* root);//计算叶子节点的个数
int BinaryTreeLevelKSize(BTNode* root, int k);//第K层节点个数
int BinaryTreeDepth(BTNode* root);// 二叉树深度/高度
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);// 二叉树查找值为x的节点