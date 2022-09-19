#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: pointer
 * @b: pointer
 * @temp: integer
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
