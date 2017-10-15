#pragma once
#include "windows.h"

typedef struct C_ListNode_Struct {
	
	struct C_ListNode_Struct* pNext;

	BYTE* pData;      // 用字节序尝试表示所有类型的数据

	int pDataSize;

} C_ListNode;

C_ListNode* C_List_CreateEmpty();

// 传进来的pNewData的内存不要释放，要动态申请。
// 节点删除的时候会释放内存
void C_List_PushFront(C_ListNode** pList, BYTE* pNewData, int dataSize);

void C_List_Remove(C_ListNode** pList, BYTE* pTarget);

void C_List_Print(C_ListNode* pList);