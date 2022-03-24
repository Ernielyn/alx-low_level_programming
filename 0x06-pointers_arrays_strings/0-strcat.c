#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: and input variable of character type
 *
 * @src: input variable of type char
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
