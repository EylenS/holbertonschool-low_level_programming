#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* --> LIBRARIES <-- */
#include <stdlib.h>
#include <stdio.h>

/* ---> PROTOTYPES <--- */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printArray(const int *array, size_t start, size_t end);

#endif
