#pragma once
#include "stdafx.h"
#include "windows.h"

inline void ShowMemoryOfData(BYTE* pData, int size) {
	for (int i = 0; i < size; i++) {
		printf("%.2X ", pData[i]);
	}
	printf("\r\n");
}

inline void ShowMemoryOfData_Char(BYTE* pData, int size) {
	for (int i = 0; i < size; i++) {
		printf("%c", pData[i]);
	}
	printf("\r\n");
}
