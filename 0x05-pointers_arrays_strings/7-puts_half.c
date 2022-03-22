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
	int i, j, n;

	j = strlen(str);

	while (str[i] !='\0')
		i++;

	if ((j % 2) == 0)
	       n = (j / 2);
	else
		n = (j - 1) / 2;

	for (i = n; i <= j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
