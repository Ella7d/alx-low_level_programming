#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: pointer
 * @n: integer
 * Return: 0
 *
 */
void print_array(int *a, int n)
{
	int i, arr[0];
	int length = sizeof(arr[0]);

	for (i = 0; i < length; i++)
		_putchar(arr[i]);
	_putchar('\n');
}

