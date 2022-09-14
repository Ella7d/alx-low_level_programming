#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

		if (a > b && b > c)
		{
			printf("%d largest = a", a);
		}
		else if (b > a && a > c)
		{
			printf("%d largest = b", b);		}
		else
		{
			printf("%d largest = c", c);
		}
		return (largest);
}
