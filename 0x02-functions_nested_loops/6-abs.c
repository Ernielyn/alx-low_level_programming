#include "main.h"

/**
 * _abs - a function to compute the absolute value of an integer
 *
 * @d: and integer whose absolute value is to be computed
 *
 * Return: Always 0
 */
int _abs(int d)
{
	if (d < 0)
	{
		return (-d);
	}
	else
	{
		return (d);
	}
}
