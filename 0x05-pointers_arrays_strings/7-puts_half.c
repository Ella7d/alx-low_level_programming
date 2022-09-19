#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of given string
 * @str: pointer
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	long int n = 0;

	n = strlen(str);
	for (i = n / 2; i <= n; i++)
	{
	if (n % 2 == 0)
	str[i] = (str[i] / 2);
	_putchar(str[i]);
	}
	else if (n % 2 != 0)
	{
	str[i] = ((str[i] - 1) / 2);
	}
	_putchar(str[i]);
	}
	_putchar('\n');
}

