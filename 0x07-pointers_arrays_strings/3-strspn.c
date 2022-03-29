#include "main.h"
#include <string.h>

/**
 * _strspn - calculates length of initia segment containing characters of string accept
 *
 * @s: main string to be searched
 * @accept: string whose characters are being searched for in the main string
 *
 * Return: number of characters in s which consist of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;

	j = strspn(s, accept);

	return (j);
}
