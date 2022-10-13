#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 *  @n: number of strings passed to the function
 *  Return: 0
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *c;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(vl, char *);
		{
		if (c)
			printf("%s", c);

		else
			printf("(nil)");
		}

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}

