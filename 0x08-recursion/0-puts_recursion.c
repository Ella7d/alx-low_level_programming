#include "main.h"
/**
 *  _puts_recursion - prints a string
 *  @s: string to be printed
 *  Return: s
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	_putchar('\n');
		return;
}

