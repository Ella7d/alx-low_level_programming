#include "main.h"
/**
 * print_to_98 - prints all num from 0-98
 * @n: integer
 *Return: 0
 *
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		if (n < 98)
			n++;
		else if (n > 98)
			n--
	}
	_putchar(n + '0');
}
