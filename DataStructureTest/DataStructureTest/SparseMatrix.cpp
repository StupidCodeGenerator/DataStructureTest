#include "stdafx.h"
#include "stdlib.h"
#include "SparseMatrix.h"

void ShowMatrix(SparseMatrix* pInput) {
	for (int row = 0; row < pInput->rowLen; row++) {
		for (int col = 0; col < pInput->colLen; col++) {
			for (int i = 0; i < pInput->eleLen; i++) {
				if (pInput->data[i].col == col && pInput->data[i].row == row) {
					printf("%d, ", pInput->data[i]);
				}
			}
		}
	}
}

// The str will be overwrited if the col and row are the same
SparseMatrix* AddElement(SparseMatrix* pInput, int value, int col, int row) {
	for (int i = 0; i < pInput->eleLen; i++) {
		if (pInput->data[i].row == row && pInput->data[i].col == col) {
			pInput->data[i].value = value;
			return pInput;
		}
	}

	Element newEle;
	newEle.col = col;
	newEle.row = row;
	newEle.value = value;

	pInput->data[pInput->eleLen++] = newEle;

	return pInput;
}

SparseMatrix* TransposeMatrix(SparseMatrix* pInput) {

	SparseMatrix* pOutput = (SparseMatrix*)malloc(sizeof(SparseMatrix));

	pOutput->colLen = pInput->rowLen;
	pOutput->rowLen = pInput->colLen;
	pOutput->eleLen = pInput->eleLen;

	// This "col" is the "row" of output and the "col" of the input
	int indexOfEle_Output = 0;
	for (int col = 0; col < pInput->colLen; col++) {
		for (int i = 0; i < pInput->eleLen; i++) {
			if (pInput->data[i].col == col) {
				pOutput->data[indexOfEle_Output++] = pInput->data[i];
			}
		}
	}

	return pOutput;
}