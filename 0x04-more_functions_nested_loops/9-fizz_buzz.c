#include <stdio.h>

/**
 * main - prints numbers from 1 to 100- Fizz Bazz
 * Description: use print hello world
 * Return: void
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
