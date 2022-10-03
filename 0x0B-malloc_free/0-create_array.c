#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates array
 * @size: size
 * @c: character
 * Return: NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(sizeof(char) * size);
	if (a == 0)
	{
		return ('\0');
	}
	else
	{
	while (i < size)
	{
	a[i] = c;
	i++;
	}
	return (a);
	}
}

