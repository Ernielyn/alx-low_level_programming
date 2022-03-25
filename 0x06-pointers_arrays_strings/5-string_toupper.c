#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *string_toupper - function that changes lower case letters of a string to uppercase
 *
 * @*: a pointer to the string
 *
 * Return: a string with uppercase letters
 */

char *string_toupper(char *)
{
	int i, j, n;

	n = strlen(*);

	fo(i = 0, j = 0; i <= n && j <= n; i++, j++)
	{
		*[j] = toupper(*[i]);
	}
}
