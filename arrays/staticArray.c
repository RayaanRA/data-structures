#include "main.h"

void printStatic(int *staticArr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", staticArr[i]);
	}
	printf("\n");
}

void setStatic(int *staticArr, int index, int value, int size) {
	staticArr[index] = value;
	printStatic(staticArr, size);
	printf("Set value at index [%d] to %d\n", index, value);
}