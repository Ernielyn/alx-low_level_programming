#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - prints the sums of two diagonals of a square matrix of integers
 *
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, c, d;
	c = 0;
	d =  0;

	for (i = 0; i < size, i++)
	{
		for (j = 0; j < size; j++)
		{
			if  ( i == j)
				c = c + a[i][j];
			if (i + j == size - 1)
				d = d + a[i][j];
		}
	}
	printf("%d, %d\n", c, d);
}
