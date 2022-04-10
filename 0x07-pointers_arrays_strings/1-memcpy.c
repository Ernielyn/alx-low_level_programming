#include "main.h"
#include <string.h>

/**
 * *_memcpy - a function which copies n characters from memory area src to dest
 *
 * @dest: pointer to the destination array
 * @src: pointer to source of content to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to final destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
