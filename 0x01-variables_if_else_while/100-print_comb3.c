#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0, success
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (a != 8 && b != 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
