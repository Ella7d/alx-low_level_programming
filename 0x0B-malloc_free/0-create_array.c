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
	unsigned int i;
	char *a;
	
	while (i <= size && i != 0)
	{
	a = malloc(sizeof (*a) * size);
	a[i] = c;
	i++;
	return (a);
	}
		return (NULL);
}

