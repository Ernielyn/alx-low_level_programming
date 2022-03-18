#include "main.h"
/**
 * print_numbers - a function which prints numbers from 0 to 9
 *
 * Return: numbers 0 to 9
 */
void print_numbers(void)
{
	int e;

	for (e = 0; e <= 9; e++)
		_putchar(e + '0');
	_putchar('\n');
}
