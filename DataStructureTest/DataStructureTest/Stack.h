#pragma once
#include "windows.h"

typedef struct Stack_Struct {
			       
	BYTE*          base;
			       
	BYTE*          top;
			       
	int            size;

} Stack;

