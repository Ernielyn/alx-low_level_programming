#include "main.h"
/**
 * print_most_numbers - a function to print the numbers from 9 to 10, followed by a new line buut not 2 and 4
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9 && j != 2 && j != 4; j++)
	{
		_putchar(j + '0');
	}
	_putchar('\n');
}
