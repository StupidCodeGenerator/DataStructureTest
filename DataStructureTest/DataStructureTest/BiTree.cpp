#include "stdafx.h"
#include "BiTree.h"
#include "stdlib.h"

// ����һ��������һ�������ڹ��������ڵ㡱
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


// ǰ����������ڵ���ǰ
// ���������ǵݹ����ͬ�����ﲻ��չʾ��
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