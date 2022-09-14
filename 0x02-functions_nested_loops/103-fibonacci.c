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

	for (num = 0; num <= 4000000; num++)
	{
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
		if ((f1 % 2) == 0)
		num += f1;
	}
	printf("%lu\n", num);
	return (0);
}

