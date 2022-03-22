#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 *puts_half - a function that prints  half of the string followed by a new line
 *
 * @str: an input string to be printed to stdout
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	j = strlen(str);

	if ((j % 2) == 0)
	       n = (j / 2);
	else
		n = (j - 1) / 2;

	for (i   = 0; str[i] != '\0' && i <= n;   i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
