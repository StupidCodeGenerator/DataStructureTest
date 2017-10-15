#pragma once

#define    MAX_SIZE   100


typedef struct Element_Struct {

	int    col, row;     // coordinate

	int    value;

} Element;


typedef struct SparseMatrix_Struct {

	Element  data[MAX_SIZE];

	int      colLen, rowLen, eleLen;

} SparseMatrix;

