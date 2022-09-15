#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer
 * Return: void
 *
 */
void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		_putchhar(' ');
		j++;
	}
	j = 0;
	while (j < i)
	{
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
