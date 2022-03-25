#include "main.h"

/**
 * reverse_array - a function to reverse the array
 *
 * @a: an array of integers
 *
 * @n: number of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
