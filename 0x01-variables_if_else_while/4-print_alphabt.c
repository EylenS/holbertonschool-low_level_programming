#include <stdio.h>
/**
 * main - breve descripcion
 * Description: use print hello world
 * Return: void
*/
int main(void)
{
char letra;

	for (letra = 97; letra <= 122; letra++)
		if (letra != 101 && letra != 113)
			putchar(letra);
putchar('\n');
return (0);
}
