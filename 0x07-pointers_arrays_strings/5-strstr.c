#include "main.h"
#include <string.h>

/**
 * *_strstr - finds first occurance of substring needle in string haystack
 *
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to first occurance in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	return (result);
}
