#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - breve descripcion
 * Description: use print hello world
 * Return: void
*/
int main(void)
{
int n;
int varUd;
srand(time(0));
n = rand() - RAND_MAX / 2;
varUd = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, varUd);
}
else
{
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, varUd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, varUd);
	}
}
return (0);
}
