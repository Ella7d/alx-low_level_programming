#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: pointer
 * @b: pointer
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
