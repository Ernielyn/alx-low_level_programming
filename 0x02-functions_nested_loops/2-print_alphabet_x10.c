#include "main.h"

/**
*print_alhabet_x10 - a function which prints the alphabet 10 times
*
*Return: the alphabet x10
*/
void print_alphabet(void)
{
	int num;
	char ch;

	num = 0;

	while (num<10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		num++;
	}
}
