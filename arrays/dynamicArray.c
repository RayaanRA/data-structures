#include "main.h"

void printDynamic(int *dynArr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", dynArr[i]);
	}
	printf("\n");
}

void setDynamic(int *dynArr, int index, int value, int size) {
	if (index < 0 || index > size - 1) {
		printf("Index out of bounds, no action taken\n");
		return;
	}
	dynArr[index] = value;
	printDynamic(dynArr, size);
	printf("Set value at index [%d] to %d\n", index, value);
}

void insertDynamic(int **dynArr, int index, int value, int *size) {
	if (index < 0 || index > *size - 1) {
		printf("Index out of bounds, no action taken\n");
		return;
	}
	(*size)++;
	*dynArr = (int*) realloc(*dynArr, (*size) * sizeof(int));
	for (int i = *size; i > index; i--) {
		(*dynArr)[i] = (*dynArr)[i - 1];
	}
	(*dynArr)[index] = value;
	printDynamic(*dynArr, *size);
}

void deleteDynamic(int **dynArr, int index, int *size) {
	if (index < 0 || index > *size - 1) {
		printf("Index out of bounds, no action taken\n");
		return;
	}
	(*size)--;
	for (int i = index; i < *size; i++) {
		(*dynArr)[i] = (*dynArr)[i + 1];
	}
	*dynArr = (int*) realloc(*dynArr, (*size * sizeof(int)));
	printDynamic(*dynArr, *size);

}

int search(int *arr, int value, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			printf("Found value %d at index %d\n", value, i);
			return i;
		}
	}
	printf("Value not found\n");
	return -1;
}