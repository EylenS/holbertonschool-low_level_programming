#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: argument type int
 * @height: argument type int
 *
 * Return: pointer to a 2 dimensional array of int
 * On failure return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (00);
	p = malloc(sizeof(int *) * height);
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
			if (p[i] != NULL)
				for (j = 0; j < width; j++)
				{
					p[i][j] = 0;
				}
		}
		return (p);
	}
	return (00);
}
