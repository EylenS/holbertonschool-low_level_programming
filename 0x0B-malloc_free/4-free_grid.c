#include <stdlib.h>
#include "holberton.h"

/**
 * free_digit - frees a 2 dimensional grid previously created alloc_grid
 * @grid: pointer to pointer type int
 * @height: argument type int
 *
 * Return: does not return any value
 * On fail
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
