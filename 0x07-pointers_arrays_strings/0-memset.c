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
	memset(s, b, n);

	return (s);
}
