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
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
