#include "main.h"
/**
 * times_table - multiples of 9 from 0
 * r: row c:column d: digits of numbers
 * Return: 0
 *
 */
void times_table(void)
{
	int c, r, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			d = r * c;
			of (d < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d% 10 + '0');	
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
		}						_putchar(10);
	}
}


