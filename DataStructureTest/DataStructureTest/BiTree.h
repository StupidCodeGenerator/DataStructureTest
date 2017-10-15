#pragma once

typedef struct BiTree_Struct {

	struct BiTree_Struct*       pChild_L;
	struct BiTree_Struct*       pChild_R;
						        
	char*                       str;       // Only for test

} BiTree;

BiTree* CreateBiTree(char* data, BiTree* pChild_L, BiTree* pChild_R);
BiTree* Create_SingleNode_BiTree(char* str);
void AppendChild_L(BiTree* pParent, BiTree* pChild);
void AppendChild_R(BiTree* pParent, BiTree* pChild);
void PreOrderTraverse_PrintData(BiTree* pTree);