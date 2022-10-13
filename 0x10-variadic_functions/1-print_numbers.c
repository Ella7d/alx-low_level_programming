#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n:number of integers passed to the function
 * Return: 0
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
	if (separator && i < n - 1)
		printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
