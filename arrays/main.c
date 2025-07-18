#include "main.h"

int main(int argc, char *argv[]) {

	// Static Array
	int staticArr[10] = {0};
	int size = (sizeof(staticArr)) / (sizeof(int));
	printStatic(staticArr, size);
	setStatic(staticArr, 0, 1, size);
	// Can't insert/delete without memory management

	printf("\n\n");

	// Dynamic Array
	int *dynArr = (int*) malloc(sizeof(int) * 10);
	size = 10;
	for (int i = 0; i < size; i++) {
		dynArr[i] = i;
	}
	printDynamic(dynArr, size);
	setDynamic(dynArr, 15, 1, size);
	insertDynamic(&dynArr, 1, 7, &size);
	deleteDynamic(&dynArr, 0, &size);
	search(dynArr, 7, size);

	free(dynArr);
	dynArr = NULL;

	return 0;
}