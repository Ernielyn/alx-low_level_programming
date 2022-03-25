#include "main.h"
#include <string.h>
#include <ctype.h>

int search_separators(char c);

/**
 * search_separators - a function to check for separators
 *
 * @c: input variable of character type
 *
 * Return: 1 if c is a character
 */

int search_separators(char c)
{
	int i;
	char separators[15] = {'\t', '\n', ' ', ',', ':', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i  <= 15; i++)
	{
		if (c == separators[i])
			return (1);
		else
			return (0);
	}
}

/**
 * *cap_string(char *s);
 *
 * @s: input pointer to the string
 *
 * Return: a string with capitalized words
 */

char *cap_string(char *);
{
	for (i =0; s[i] != '\0'; i++)
	{
		if (i == 0  && s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;

		if (search_separators(s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
	}
	
	return (s);
}
