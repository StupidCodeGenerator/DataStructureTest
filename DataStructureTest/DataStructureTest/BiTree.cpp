#include "stdafx.h"
#include "BiTree.h"
#include "stdlib.h"

// 建立一个空树，一般适用于构建根“节点”
BiTree* CreateBiTree(char* str, BiTree* pChild_L, BiTree* pChild_R) {
	BiTree* pOutput = (BiTree*)malloc(sizeof(BiTree));
	
	pOutput->str = str;
	pOutput->pChild_L = pChild_L;
	pOutput->pChild_R = pChild_R;

	return pOutput;
}


BiTree* Create_SingleNode_BiTree(char* str) {
	return CreateBiTree(str, NULL, NULL);
}


void AppendChild_L(BiTree* pParent, BiTree* pChild) {
	pParent->pChild_L = pChild;
}

void AppendChild_R(BiTree* pParent, BiTree* pChild) {
	pParent->pChild_R = pChild;
}


// 前序遍历，根节点在前
// 中序后序仅是递归次序不同，这里不再展示。
void PreOrderTraverse_PrintData(BiTree* pTree) {
	printf(pTree->str);
	printf("\r\n");
	if (pTree->pChild_L) {
		PreOrderTraverse_PrintData(pTree->pChild_L);
	}
	if (pTree->pChild_R) {
		PreOrderTraverse_PrintData(pTree->pChild_R);
	}
}


//BiTree* CreateHuffmanTree(char** pStrs, int len) {
//	// 1. Create a list of BiTrees, only root
//	
//}