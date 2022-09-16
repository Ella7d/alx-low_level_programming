#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	char a, b;
	int i = 0;

		while (i < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			a = b;
			if (b > 9)
		{
			_putchar('1');
			b = a % 10;
		}

		_putchar('0' + c);
		}
	_putchar('\n');
	i++;
	}
}
