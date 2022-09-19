#include "main.h"
#include <string.h>
/**
 * _puts - prints to stdout
 * @str: string
 * Return: void
 *
 */
void _puts(char *str)
{
	char c;
	
	c = str;
	_putchar(c);
	_putchar('\n');
	return (0);
}
