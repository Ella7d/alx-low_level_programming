#include <stdio.h>
/**
 * main - entry point
 * @f1: number f2: number
 * Return: 0
 *
 */
int main(void)
{
	int f1 = 1, f2 = 2, f3, num;

	for (num = 0; num < 50; num++)
	{
	f3 = f1 + f2;
	printf("%d", f3);
	f1 = f2;
	f2 = f3;
	if (num == 49)
		printf("\n");
	else
	printf(", ");

	}
	return (0);
}
