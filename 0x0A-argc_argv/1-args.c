#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints its name
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: On success 0.
 * On error, other
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
