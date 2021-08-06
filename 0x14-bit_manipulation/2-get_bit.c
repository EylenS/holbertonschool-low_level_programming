#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get.
 * @n: the integer from which the bit value will be obtained.
 * Return: the value of the bit at index.
 * On error, return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nu_bit = sizeof(n) * 8; /* number of bits */
	unsigned int i;

	if (index > nu_bit)
		return (-1);
	i = n >> index;
	if ((i & 1) == 1)
		return (1);
	else
		return (0);
}
