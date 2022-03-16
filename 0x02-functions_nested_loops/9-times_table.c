#include "main.h"
/**
 * time_tables - function to print the 9 times table starting with 0
 *
 * Return: Always 0
 */
void times_table(void);
{
	int a, b, pdt;

	for (a = 0; a <=9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			pdt = a * b;
			if (b != 0)
			{
				_putchar (',');
				_putchar (' ');
			}
			if (b == 0)
			{
				_putchar ('0');
			}
			else if (pdt >= 10)
			{
				_putchar ((pdt /10) = '0');
				_putchar ((pdt % 10) ='0');
			}
			else if ((pdt < 10) && (b != 0))
					{ 
					_putchar (' ');
					_putchar ((pdt % 10) + '0');
					}
		}
		_putchar ('\n');
	}
}
