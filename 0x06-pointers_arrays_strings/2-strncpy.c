#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string
 *
 * @dest: a pointer to the destination array
 *
 * @src: the string to be copied
 *
 * @n: number of characters to be copied to the dest string
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
