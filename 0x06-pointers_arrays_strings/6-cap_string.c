#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - a function to capitalize all words of a string
 *
 * @*: a pointer to the string
 *
 * Return: a string with capitalized words
 */

char *cap_string(char *)
{
	int i, j, n;

	n = strlen(*);

	fo(i = 0, j = 0; i <= n && j <= n; i++, j++)
	{
		if (*[i] == '\t' || *[i] == ' ' || *[i] == '\n' || *[i] == ','
		*[j] = toupper(*[i]);
	}
}
