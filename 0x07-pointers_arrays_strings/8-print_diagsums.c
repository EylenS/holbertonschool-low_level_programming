#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix
 * @a: pointer to array
 * @size: size of the square
 *
 * Return: Void
 *
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 = s1 + *(a + i * size + j);
			if (i == (size - 1) - j)
				s2 = s2 + *(a + i * size + j);
		}
	printf("%d, %d\n", s1, s2);
}
