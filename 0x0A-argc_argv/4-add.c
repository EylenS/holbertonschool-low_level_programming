#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: On success 0.
 * On error, other
 */
int main(int argc, char *argv[])
{
	int i, num;
	int suma = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0)
			{
				printf("Error\n");
				return (1);
			}
			suma = suma + num;
		}
		printf("%d\n", suma);
	}
	return (0);
}
