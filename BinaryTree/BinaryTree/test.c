#define _CRT_SECURE_NO_WARNINGS 1
#include"binarytree.h"


void Test1()
{
	BTNode* root = CreatBinaryTree();
	PreOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");
}
void Test2()
{
	BTNode* root = CreatBinaryTree();
	printf("TreeSize:%d\n", BinaryTreeSize(root));
	printf("BinaryTreeLeafSize:%d\n", BinaryTreeLeafSize(root));
	printf("BinaryTreeLevelKSize:%d\n", BinaryTreeLevelKSize(root,3));
	printf("BinaryTreeDepth:%d\n", BinaryTreeDepth(root));

}
void Test3()
{
	BTNode* root = CreatBinaryTree();
	BTNode* Find = BinaryTreeFind(root, 'A');
	printf("%c ", Find->data);
	printf("\n");
}
int main()
{
	//Test1();//²âÊÔ±éÀú
	//Test2();
	Test3();
	return 0;
}