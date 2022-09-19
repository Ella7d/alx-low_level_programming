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
	int j = n / 2;
	if (j % 2 == 0)
	{
	for (i = j + 1; i < n; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
		for (i = (n - 1) / 2 + 1; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

