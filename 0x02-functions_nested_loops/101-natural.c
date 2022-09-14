#include "main.h"
#include <stdio.h>
/**
 * main - entry pt
 * @i: integer j: intger sum: sum of numbers
 * Return: 0
 *
 */
int main(void)
{
	int i, j, sum = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	sum + = i;
	printf("%d\n", sum);
	}
	retutn(0);
}

