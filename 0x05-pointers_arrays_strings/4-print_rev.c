#include "main.h"
#include <string.h>

/**
 * print_rev - a function to print a string in reverse
 *
 * @s: and input variable of character type
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n, j;

	n = strlen(s);

	j = n - 1;

	while (j >= 0)
	{
		_putchar(s[j]);

		j--;
	}

	_putchar('\n');
}
