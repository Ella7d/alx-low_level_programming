#include "main.h"
#include<string.h>

/**
 * _strlen - string lenght
 * @s: string
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int i;
	char a;

	a = strlen(s);

	for (i = 0; i < a; i++)
	{
	_putchar('s');
	}
	return (i);
}
