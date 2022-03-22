#include "main.h"
#include <string.h>

/**
 * *_strcpy - function that copies the string pointed to by src to buffer pointed to by dest
 *
 * @dest: and input variable of character type
 *
 * @src: input variable of type char
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);

	return (dest);
}
