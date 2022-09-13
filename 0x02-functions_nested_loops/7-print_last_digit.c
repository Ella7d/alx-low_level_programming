#include "main.h"
/**
 * print_last_digit - prints the last digit number
 * @n: number
 * Return: 0
 * int - integer
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
	i = i * -1;
	_putchar(i);

	return (i);
}
