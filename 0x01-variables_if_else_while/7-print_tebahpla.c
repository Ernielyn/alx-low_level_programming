#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0, success
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
