#include "main.h"

/**
*print_alphabet_x10 - a function which prints the alphabet 10 times
*
*Return: the alphabet x10
*/
void print_alphabet_x10(void)
{
	int num;
	char ch;

	num = 0;

	while (num < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		num++;
	}
}
