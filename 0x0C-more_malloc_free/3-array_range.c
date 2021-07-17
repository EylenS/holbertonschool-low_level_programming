#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creats an array of integers from min to max
 * @min: minimun number type int
 * @max: maximum number type int
 *
 * Return: pointer to the newly created array
 * On error, return NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (00);
	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p != 0)
	{
		for (i = 0; i <= (max - min); i++)
			p[i] = i + min;
		return (p);
	}
	return (00);
}
