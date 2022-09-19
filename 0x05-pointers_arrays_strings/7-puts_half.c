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
	if (n % 2 == 0)
	{
	for (i = n + 1/ 2; i < n; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
		for (i = (n - 1) / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

