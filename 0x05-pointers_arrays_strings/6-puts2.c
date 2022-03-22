#include "main.h"
#include <string.h>

/**
 * puts2 - function which every other character of the string
 *
 * @str: input variable
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, n;

	n = strlen(str);

	i = 0;

	while (i <= n && str[i] != [i])
	{
		_putchar(str[i]);
		i++;
		i++;
	}

	_putchar('\n');
}
