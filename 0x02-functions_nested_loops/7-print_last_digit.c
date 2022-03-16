#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: input integer
 *
 * Return: returns vales of last digit
 */
int print_last_digit(int c)
{
	int ld;

	ld = c%10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar  ('ld');
	return (ld);
}
