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

void insertDynamic(int *dynArr, int index, int value, int *size) {
	dynArr = (int*) realloc(dynArr, *size + sizeof(int));
	(*size)++;
	printDynamic(dynArr, *size);
}