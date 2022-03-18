#include "main.h"
/**
 * _isdigit - function to check for a digit (0 through 9)
 *
 * @c: the input
 *
 * Return: returns 1 if c is a digit, and 0 Otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
