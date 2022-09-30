#include <stdio.h>
#include "main.h"
/**
* main - print each argument passed to program on a line
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
		printf("%d\n", argc - 1);
		(void)argv;
	return (0);
}
