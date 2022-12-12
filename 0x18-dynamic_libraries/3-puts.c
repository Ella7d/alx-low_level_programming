#include "main.h"
#include <string.h>
/**
 * _puts - prints to stdout
 * @s: string
 * Return: void
 *
 */
void _puts(char *s)
{
	int i;

	for  (i = 0; s[i] != '\0'; i++)
	_putchar(s[i]);
	_putchar('\n');
}
