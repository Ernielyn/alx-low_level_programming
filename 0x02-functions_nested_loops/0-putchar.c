#include "main.h"

/**
*main - starting and entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char *dh = "_putchar";

	while(*dh)
	{
		_putchar(*dh);
		dh++;
	}
	_putchar('\n');

	return (0);
}
