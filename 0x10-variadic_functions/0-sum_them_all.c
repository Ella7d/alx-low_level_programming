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
	unsigned int i, sum;
	va_list ap;

	va_start (ap, n);
	sum = 0;
	if (n > 0)
	{
	for (i = 0; i <= n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return (sum);
	}
	return (0);
}
