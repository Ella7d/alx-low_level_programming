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

	for (i = 0; ((i % 2) != 0); i++)
		_putchar(i + '0');
		_putchar('\n');
		return (0);
}
