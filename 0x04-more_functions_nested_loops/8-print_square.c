#include "main.h"
/**
 * print_square - a function to print a square
 *
 * @size: the diemensions of the square
 *
 * Return: a square
 */
void print_square(int size);
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
