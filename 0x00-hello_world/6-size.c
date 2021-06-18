#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int  b;
long c;
long long d;
float e;
a = 'h';
b = 8;
c = 7;
d = 3456;
e = 34.6;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of a long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(e));
return (0);
}
