#include "main.h"

void printDynamic(int *dynArr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", dynArr[i]);
	}
	printf("\n");
}

void setDynamic(int *dynArr, int index, int value, int size) {
	dynArr[index] = value;
	printDynamic(dynArr, size);
	printf("Set value at index [%d] to %d\n", index, value);
}

void insertDynamic(int **dynArr, int index, int value, int *size) {
	*dynArr = (int*) realloc(*dynArr, (*size + 1) * sizeof(int));
	(*size)++;
	(*dynArr)[index] = value;
	for (int i = index + 2; i < *size; i++) {
		(*dynArr)[i] = (*dynArr)[i - 1];
	}
	printDynamic(*dynArr, *size);
}

void deleteDynamic(int **dynArr, int index, int *size) {
	(*size)--;
	for (int i = index; i < *size - 1; i++) {
		(*dynArr)[i] = (*dynArr)[i + 1];
	}
	*dynArr = (int*) realloc(*dynArr, (*size * sizeof(int)));
	printDynamic(*dynArr, *size);

}