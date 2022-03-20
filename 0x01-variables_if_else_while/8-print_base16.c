#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0, success
 */

int main(void)
{
	int a;
	char hex;

	for (a = 0; a < 10; a++)
		putchar(a + '0');

	for (hex = 'a'; hex < 'g'; hex++)
		putchar(hex);

	putchar('\n');

	return (0);
}
