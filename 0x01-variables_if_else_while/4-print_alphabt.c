#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0, success
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' && alp != 'e')
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
