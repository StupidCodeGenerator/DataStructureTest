#pragma once
#include "windows.h"

typedef struct C_ListNode_Struct {
	
	struct C_ListNode_Struct* pNext;

	BYTE* pData;      // ���ֽ����Ա�ʾ�������͵�����

	int pDataSize;

} C_ListNode;

C_ListNode* C_List_CreateEmpty();

// ��������pNewData���ڴ治Ҫ�ͷţ�Ҫ��̬���롣
// �ڵ�ɾ����ʱ����ͷ��ڴ�
void C_List_PushFront(C_ListNode** pList, BYTE* pNewData, int dataSize);

void C_List_Remove(C_ListNode** pList, BYTE* pTarget);

void C_List_Print(C_ListNode* pList);