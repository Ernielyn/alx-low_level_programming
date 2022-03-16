#include "main.h"

/**
 * _isalpha - function to check whether a character is alphabetic
 *
 * @c: single letter input
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
