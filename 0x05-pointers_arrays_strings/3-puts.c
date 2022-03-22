#include "main.h"
#include <unistd.h>

/**
 *_puts - a function that prints  a string followed by a new line to stdout
 *
 * @str: an input string to be printed to stdout
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i   = 0; str[i] != '\0';   i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
