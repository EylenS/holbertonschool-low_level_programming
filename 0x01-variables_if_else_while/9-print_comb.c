#include <stdio.h>
/**
 * main - breve description
 * Description: use print hello world
 * Return: void
*/
int main(void)
{
	int a;

	for (a = 48; a < 57; a++)
	{
		putchar(a);
		putchar(',');
		putchar (' ');
	}
	putchar(57);
	return (0);
}

