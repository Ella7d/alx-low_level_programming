#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  main - prints changes
 *  @argc: count args
 *  @argv: vector
 *  Return: val
 */
int main(int argc, char *argv[])
{
	int c, coins = 0;

	if (args != 2)
	{
		printf("Errors\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
