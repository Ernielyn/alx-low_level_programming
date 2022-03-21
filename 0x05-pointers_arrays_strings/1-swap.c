#include "main.h"

/**
 * swap_int - a function which swaps the values of two integers
 *
 * @a: pointer to the address of first variable
 * @b: pointer to the address of the second variable
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	a = b;
	b = a;
}
