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

	for (i = 0; i  <= n; i++)
	{
		if  (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}

		for (j = 0; j < 15, j++)
		{
			if (s[i] == separators[j];
				k = 1;
			continue;
		}
				
		if (k == 1 && s[i] >= 'a' && s[i] <= 'z')
			s[i + 1] = s[i] - 32;
		
		else
			s[i] = s[i];
	}

		return (s);
}
