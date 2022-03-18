#include "main.h"
/**
 * _isupper - a function which checks for an upper case character
 *
 * @c: the input
 *
 * Return: returns 1 if c is uppercase, and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
