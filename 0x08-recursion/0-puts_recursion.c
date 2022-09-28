#include "main.h"
/**
 *  _puts_recursion - prints a string
 *  @s: string to be printed
 *  Return: s
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
	_putchar("%s", s);
	return (s);
	s++;
	}
	_putchar("\n");
		return (0);
		_puts_recursion(s);
}


