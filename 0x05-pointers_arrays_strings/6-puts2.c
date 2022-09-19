#include "main.h"
#include <string.h>
/**
 * puts2 - prints a string
 * @str: pointer
 * Return: 0
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (i % 2 == 0);
		_putchar(str[i] + '0');
	}
		_putchar('\n');
}
