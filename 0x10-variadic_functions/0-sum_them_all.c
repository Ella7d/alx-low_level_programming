#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sumof all parameters
 * @n: parameter n
 * Return: int
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list vl;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (i = 0; i < n; i++)
	sum += va_arg(vl, int);
	va_end(vl);

	return (sum);
}
