#include "main.h"
/**
 * more_numbers - function to print the numbers 0 to 14 ten times, followed by a new line
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
