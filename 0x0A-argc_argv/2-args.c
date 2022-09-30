#include <stdio.h>
#include "main.h"
/**
* main - print product of argument numbers
* @argc: argument counter
* @argv: numbers to multiply
* Return: 0 on success, 1 if two arguments not given
*/
int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
