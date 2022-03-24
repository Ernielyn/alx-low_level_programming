#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: a pointer to the destination array
 *
 * @src: the string to be appended
 *
 * @n: number of characters to be appended to the dest string
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
