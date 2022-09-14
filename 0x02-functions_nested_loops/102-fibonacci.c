#include <stdio.h>
/**
 * main - entry point
 * @i: number j: number
 * Return: 0
 *
 */
int main()
{
	int f1 = 1, f2 = 2, sum = 0, num = 50;

	{
	for (num = 0; num <= 50; num++)
	
	if (f1 == 1)
	{
		return (1);
	}
	else if (f1 > 1)
	{
		sum = f1 + f2;
		while (sum < num)
		{
			printf ("%d\n", sum);
			f1 = f2;
			f2 = sum;
			sum = f1 + f2;
		}
	}
	}
}
