#include "main.h"
/**
 * print_triangle - a function to print a triangle
 *
 * @size: the height and base of the triangle
 *
 * Return: always a triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if(size > 0)
	{

		for ( i = 0; i < size; i++)
		{
		
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for(k = 0; k <= i; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}	
