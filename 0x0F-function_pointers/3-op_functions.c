#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - This function adds 2 int
 * @a: an integer
 * @b: an integer
 *
 * Return: the result of math operation
 * On error, 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This function calculates the difference between 2 int
* @a: an integer
 * @b: an integer
 *
 * Return: the result of math operation
 * On error, 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This function multiiplies 2 integers
* @a: an integer
 * @b: an integer
 *
 * Return: the result of math operation
 * On error, 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This function divides 2 integers
* @a: an integer
 * @b: an integer
 *
 * Return: the result of math operation
 * On error, 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - This function calculates the remainder of a division
 * @a: an integer
 * @b: an integer
 *
 * Return: the result of math operation
 * On error, 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		 exit(100);
	}
	return (a % b);
}
