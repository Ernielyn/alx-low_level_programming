#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *string_toupper - function that changes lowercase letters to uppercase
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
