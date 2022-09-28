#include "main.h"
/**
 * factorial - gives factorial of given number
 * @n: number given
 * Return: n
 */
int factorial(int n)
{
if (n > 0)
	_putchar(n*facrorial(n - 1));
else
	return (-1);
}
