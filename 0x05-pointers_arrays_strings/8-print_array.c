#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: input string   whose elements are to be printed
 *
 * @n: number of elements of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i  = 0; i < n;   i++)
	{
		if (i != n-1)
			printf("%d' ", str[i]);
		else
			printf("%d\n", str[i]);
	}
}
