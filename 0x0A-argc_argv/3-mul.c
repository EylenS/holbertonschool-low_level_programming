#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies 2 numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: On success 0.
 * On error, other
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", j);
	}
	return (0);
}
