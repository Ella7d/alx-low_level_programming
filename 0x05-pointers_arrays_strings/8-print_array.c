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
	int i;
	
	*a = &n;
	for (i = 0; i < =n ; i++)
	printf ("%d, ", *(a+i));
}
