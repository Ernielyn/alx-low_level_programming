#include "main.h"
/**
 * more_numbers - function to print the numbers 0 to 14 ten times, followed by a new line
 *
 * Return: always 0-14 x10 followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{

			_putchar((j / 10) + '0');
			
			}

			_putchar((j % 10) + '0');
		
		}

		_putchar('\n');
	
	}
}
