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
	int i, j, k, l, n;
	char test[20000];
	char st[20000];

	n = strlen(s);

	i = 0;
	while (i <= n)
	{
		st[i] = s[i];
		i++;
	}

	k = n - 1;

	for  (j =  k,  i = 0; j >= 0 && i <= n; j--, i++)
	{
		test[i] = st[j];
	}

	l = 0;
	while (l <= n)
	{
		s[l] = test[i];
		l++;
	}
}
