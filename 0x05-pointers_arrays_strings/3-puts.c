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
	int i;

	for  (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}
