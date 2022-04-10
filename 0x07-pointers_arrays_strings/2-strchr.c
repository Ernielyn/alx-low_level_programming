#include "main.h"
#include <string.h>

/**
 * *_strchr - a function to locate the first occurance of a char c in string s
 *
 * @s: pointer to a string that is to be searched
 * @c: character to be found
 *
 * Return: pointer to first occurance of character c; NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
