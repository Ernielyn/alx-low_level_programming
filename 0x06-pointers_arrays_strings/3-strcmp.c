#include "main.h"
#include <string.h>

/**
 * _strcmp - a function which compares two strings
 *
 * @s1: the first string
 *
 * @s2: second string
 *
 * Return: 0 if s1=s2, >0 if s1>s2, <0 is s2>s1
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	n = strcmp(s1, s2);

	return (n);
}
