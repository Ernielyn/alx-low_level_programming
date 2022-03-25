#include "main.h"
#include <string.h>

/**
 * *leet - a function to encode a string into 1337
 *
 * @s: the input string
 *
 * Return: an encoded string
 */

char *leet(char *s)
{
	int i, j, n;
	char replace[10] = {'4', '4', '3', '3', '0',  '0', '7', '7', '1', '1'};
	char original[10] = {'a', 'A', 'e', 'E', 'o', 'E', 't', 'T', 'l', 'L'};

	n = strlen(s);

	i = 0;

	while  (s[i])
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = replace[j]
			}
		}
		i++;
	}
	
	return (s);
}	
