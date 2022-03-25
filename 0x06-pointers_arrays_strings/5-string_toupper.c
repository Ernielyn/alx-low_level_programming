#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *string_toupper - function that changes lower case letters of a string to uppercase
 *
 * @s: a pointer to the string
 *
 * Return: a string with uppercase letters
 */

char *string_toupper(char *s)
{
	int j, n;

	n = strlen(s);

	for (j = 0; j <= n; j++)
	{
		s[j] = -32;
	}

	return (s);
}
