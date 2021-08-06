#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: the integer from which the bit value will be obtained.
 * Return: 1 if it worked.
 * On error, return -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nu_bit = sizeof(*n) * 8; /* number of bits */
	unsigned int i, a;

	a = *n;
	if (index > nu_bit)
		return (-1);
	i = 1 << index;
	a = ~a;
	a = a | i;
	*n = ~a;
	return (1);
}
