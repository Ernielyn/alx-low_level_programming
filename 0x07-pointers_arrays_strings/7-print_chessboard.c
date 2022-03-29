#include "main.h"

/**
 * print_chessboard - prints the chessboad
 *
 * @pointer to an 8x8 matrix
 *
 * Return: void
 */

void print_chessboard(char (*a)[8]);
{
	int i, j;
	char ch;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			ch = a[i][j];
			_putchar(ch);
		}
		_putchar('\n');
	}
}
