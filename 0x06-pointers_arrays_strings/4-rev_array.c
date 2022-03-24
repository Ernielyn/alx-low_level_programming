#include "main.h"
#include <string.h>

/**
 * reverse_array - a function which reverses the content of an array of integers
 *
 * @a: pointer to an array of integers
 *
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, k, l, n;
	int test[20000];
	int st[20000];

	n = strlen(a);

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
		a[l] = test[i];
		l++;
	}
}
