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
	int i, j, n;
	char *upper

	n = strlen(s);

	fo(i = 0, j = 0; i <= n && j <= n; i++, j++)
	{
		upper[j] = toupper(s[i]);
	}

	return (upper);
}
