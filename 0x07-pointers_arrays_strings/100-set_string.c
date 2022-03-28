#include "mainh."

/**
 * set_string - a function to change the content of a string
 *
 * @**s: a pointer to the adress of pointer to
 *
 * @*to: a pointer to the adress of the string
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
