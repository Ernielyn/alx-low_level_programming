#include "main.h"
/**
 * print_most_numbers - a function to print the numbers from 0-9 but not 2 and 4
 *
 * Return: a list of numbers from 0-9 excluding 2 & 4
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if((j == 2) || (i == 4))
			continue;
		else
		_putchar(j + '0');
	}
	_putchar('\n');
}
