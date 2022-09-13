#include "main.h"
/**
 * print_alphabet_x10 - print 10 times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)

{
	char lc;
	int n;

	for (n = 0; n <= 10; n++)

	{
	for (lc = 'a'; lc <= 'z'; lc++)
	_putchar(lc);
	_putchar('\n');
	}
}
