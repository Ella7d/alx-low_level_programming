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
	
	if (i < size && i != 0)
	{
	a = malloc(sizeof (char) * size);
	a[i] = c;
	i++;
	return (a);
	}
	else if (size == 0)
	{
		return ('\0');
	}
	else if (a == 0)
	{
		return ('\0');
	}
	else	
	{
		return ('\0');
	}
}

