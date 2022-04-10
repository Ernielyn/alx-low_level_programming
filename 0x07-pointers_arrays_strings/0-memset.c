#include "main.h"
#include <string.h>

/**
 * *_memset - a function to fill n characters of a string with character c
 *
 * @s: pointer to the block of memory to fill
 * @b: character to be set
 * @n: number of bytes to fill
 *
 * Return:pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
