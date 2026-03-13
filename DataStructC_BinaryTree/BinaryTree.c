#include "BinaryTree.h"

//顺序结构(除了满二叉树和完全二叉树)

//链式结构

//创建二叉树
void creatBinartTree(BTN** T) {
	Data ch;
	ch;
	if (ch == '#') {
		*T = NULL;
	}
	else {
		*T = (BTN*)malloc(sizeof(BTN));
		(*T)->data = ch;
		createBinartTree(&(*T)->left);
		createBinartTree(&(*T)->right);
	}
}

//前序遍历
void showPreOrder(BTN* T) {
	if (T == NULL) {
		return;
	}
	printf("%c", T->data);
	showPreOrder(T->left);
	showPreOrder(T->right);
}

//中序遍历
void showInOrder(BTN* T) {
	if (T == NULL) {
		return;
	}
	showInOrder(T->left);
	printf("%c", T->data);
	showInOrder(T->right);
}