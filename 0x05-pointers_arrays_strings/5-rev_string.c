#include "main.h"
#include <string.h>

/**
 * rev_string - a function to reverse a string
 *
 * @s: and input variable of character type
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k, l, m, n;

	n = strlen(s);

	char rev[n];
	char store[n];

	i = 0;
	while (i <= n)
	{
		store[i] = s[i];
		i++;
	}

	k = n - 1;
	
	for  (j =  k,  i = 0; k >= 0, i <= n; j--, i++)
	{
		rev[i] = store[j];
	}

	l = 0;
	while (l <= n)
	{
		s[l] = rev[i];
		l++;
	}
	
}
