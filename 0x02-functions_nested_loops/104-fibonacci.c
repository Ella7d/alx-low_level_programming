#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0, num = 0;

	for (num = 0; num <= 98; num++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;

	}
	printf("%lu\n", f3);
	printf(",");
	printf(" ");
	{
		return (0);
	}
}

