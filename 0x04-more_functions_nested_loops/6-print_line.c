#include "main.h"
/**
 * print_line - a function to print a line
 * 
 * @n: the input integer
 *
 *Return: Always 0
 */
void print_line(int n)
{
	if ( n > 0)
	{
		int i;
		for (i = 1; i <= n; i++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
