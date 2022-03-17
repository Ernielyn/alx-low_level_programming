#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function which prints natural numbers from n to 98
 *
 * @n: the input natural number
 *
 * Return: Always 0, Success
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}	
}
