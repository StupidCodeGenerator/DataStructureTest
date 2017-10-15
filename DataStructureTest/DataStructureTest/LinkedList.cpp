#include "stdafx.h"
#include "stdlib.h"
#include "LinkedList.h"
#include "Common.h"


C_ListNode* C_List_CreateEmpty() {
	return NULL;
}


void C_List_PushFront(C_ListNode** pList, BYTE* pNewData, int dataSize) {
	C_ListNode* pNewNode = (C_ListNode*)malloc(sizeof(C_ListNode));
	pNewNode->pData = pNewData;
	pNewNode->pDataSize = dataSize;
	pNewNode->pNext = *pList;
	*pList = pNewNode;
}


// 传入数据首地址，干掉
void C_List_Remove(C_ListNode** pList, BYTE* pTarget) {
	if (!(*pList)) {
		return;
	}
	C_ListNode* pIter = *pList;
	C_ListNode* pPrev = NULL;
	while (pIter) {
		if (pIter->pData == pTarget) {
			if (pPrev) {
				pPrev->pNext = pIter->pNext;
				free(pIter);
				pIter = NULL;
				break;
			} else {     // The first element
				*pList = (*pList)->pNext;
				free(pIter);
				pIter = NULL;
				break;
			}
		}
		pPrev = pIter;
		pIter = pIter->pNext;
	}
}


void C_List_Print(C_ListNode* pList) {
	printf("Print list at address - %d\r\n", pList);
	C_ListNode* pIter = pList;
	while (pIter) {
		ShowMemoryOfData_Char(pIter->pData, pIter->pDataSize);
		pIter = pIter->pNext;
	}
}
