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

	for (i = 0; str[i] != '\0'; i++)
	if (n % 2 == 0)
	{
	_putchar(str[i] / 2);
	}
	else if (n % 2 != 0)
	{
	_putchar((str[i] - 1) / 2);
	}
	_putchar('\n');
}

