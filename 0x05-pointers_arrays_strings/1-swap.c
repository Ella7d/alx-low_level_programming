#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: integer
 * @b: integer
 * Return: int
 *
 */
void swap_int(int *a, int *b);
{
	a = *b;
	*b = &b;
	b = *a;
	*a = &a;
}
