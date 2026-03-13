#pragma once
#include<stdio.h>

typedef char Data;

//½á¹¹Ìå
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	Data data;
}BTN;