#ifndef __DYN__
#define __DYN__

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void printStatic(int *staticArr, int size);
void setStatic(int *staticArr, int index, int value, int size);

void printDynamic(int *dynArr, int size);
void setDynamic(int *dynArr, int index, int value, int size);
void insertDynamic(int **dynArr, int index, int value, int *size);
void deleteDynamic(int **dynArr, int index, int *size);

int search(int *arr, int value, int size);

#endif