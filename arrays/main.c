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
	bzero(dynArr, sizeof(dynArr));
	printDynamic(dynArr, size);
	setDynamic(dynArr, 0, 1, size);
	insertDynamic(&dynArr, 1, 2, &size);
	deleteDynamic(&dynArr, 0, &size);

	return 0;
}