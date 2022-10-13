#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anthing
 * @*: everything to be printed
 * @format: types of args passed
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list(vl);
	unsigned int i = 0;
	char *c, *sep = "";

	va_start(vl, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%d", sep, va_arg(vl, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(vl, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(vl, double));
					break;
				case 's':
					c = va_arg(vl, char *);
					if (!c)
					{
						printf("(nil)");
						break;
					}

					printf("%s%s", sep, c);
					break;
			}
			i++;
		}
		printf("\n");
	}
}
