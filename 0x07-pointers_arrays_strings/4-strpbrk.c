#include "main.h"
#include <string.g>

/**
 * *_strpbrk - function to find first character in s1 which is specified in s2
 *
 * @s: string to be scanned
 * @accept: characters to find
 *
 * Return: pointer to character in s1 which matches  those in s2; NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);

	return (result);
}
