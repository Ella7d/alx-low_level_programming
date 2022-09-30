#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	mul = 0;
	
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
