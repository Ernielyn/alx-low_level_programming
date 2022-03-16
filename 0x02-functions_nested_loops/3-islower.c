#include "main.h"

/**
 *_islower - a function which checks for a lowercase character
 *
 *c: takes in a single input int c
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c>= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
