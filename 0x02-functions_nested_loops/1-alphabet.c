#include <stdio.h>

/**
*print_alphabet - a function which prints the alphabet in lower case
*
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
