#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: the index, starting from 0 of the bit you want to set.
 * @n: the integer from which the bit value will be obtained.
 * Return: 1 if it worked.
 * On error, return -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nu_bit = sizeof(*n) * 8; /* number of bits */
	unsigned int i;

	if (index > nu_bit)
		return (-1);
	i = 1 << index; /*move the 1st bite on 1 to the left 2 change*/
	*n = *n | i;    /* the new numb n, after change the bit in idx*/
	return (1);
}
