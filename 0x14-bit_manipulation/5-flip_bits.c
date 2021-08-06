#include "main.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index.
 * @n: the number to need to flip.
 * @m: the number to get from n.
 * Return: the number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int one = 1, count = 0, x; /*one = 0001 */

	x = n ^ m; /* x stores the number obtained after XOR */
	while (x >= one)
	{
		if ((x & one) == one)
			count = count + 1;
		one = one << 1;
	}
	return (count);
	/* the last digit in binary is compared, if the last digit...*/
	/*equal to 1 then 1 digit is added to the counter. */
	/* f not, one moves to the left to compare each digit. */
}
