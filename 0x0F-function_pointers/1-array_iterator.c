#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a parameter
 * @size: the size of the array
 * @action: pointer to the function to use
 * @array: arrays type int
 *
 * Return: void function
 * On error, exit
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
