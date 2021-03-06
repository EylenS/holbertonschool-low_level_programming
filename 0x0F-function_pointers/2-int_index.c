#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: array type int
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element
 * If no element matches or size is less or equal 0,return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r != 0)
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
