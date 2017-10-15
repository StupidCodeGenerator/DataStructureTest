// DataStructureTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "common.h"

#include "LinkedList.h"
#include "SparseMatrix.h"
#include "BiTree.h"

int main()
{
	C_ListNode* pTestList = C_List_CreateEmpty();

	char* toRemove = "FUCK2";

	C_List_PushFront(&pTestList, (BYTE*)"FUCK1", strlen("FUCK1"));
	C_List_PushFront(&pTestList, (BYTE*)toRemove, strlen("FUCK2"));
	C_List_PushFront(&pTestList, (BYTE*)"FUCK3", strlen("FUCK3"));

	C_List_Remove(&pTestList, (BYTE*)toRemove);
	
	C_List_Print(pTestList);

	getchar();
    return 0;
}

