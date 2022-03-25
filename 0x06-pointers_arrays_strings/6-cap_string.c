#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - a function to capitalize all words of a string
 *
 * @s: a pointer to the string
 *
 * Return: a string with capitalized words
 */

char *cap_string(char *s)
{
	int i, k, n;
	char separators[15] = {'\t', '\n', ' ', ',', ':', '.', '!', '?', '"', '(', ')', '{', '}'};
	char c;

	n = strlen(s);


	for (i = 0; i < 15, i++)
	{
		c = s[i];
		if (c == separators[i];
				k = 1;
	}

	for (i = 0; i <= n; i++)
	{
		if (k == 1)
		{
			s[i + 1] -= 32;
<F5>		}
		else
		{
			s[i] = s[i];
		}
	}

		return (s);
}
