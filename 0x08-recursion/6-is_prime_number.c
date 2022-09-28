#include "main.h"
/**
 * is_prime - divide by numbers skip even numbers
 * @divisor: divisor by n
 * Return: 1 if prime
 */
int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - tests is n is prime
 * @n:numer to check
 * Return: 0 if not prime
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (is_prime(n, divisor));
}
