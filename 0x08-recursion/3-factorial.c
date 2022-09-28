#include "main.h"
/**
 * factorial - gives factorial of given number
 * @n: number given
 * Return: n
 */
int factorial(int n)
{
if (n > 1)
	return (n * factorial(n - 1));
if (n == 0 && n == 1)
	return (1);
else
	return (-1);
}
