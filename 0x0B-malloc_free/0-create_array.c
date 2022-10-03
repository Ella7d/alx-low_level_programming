#include "main.h"
/**
 * *create_array - creates array
 * @size: size
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;
	
	while (i < size && i != 0)
	{
	a = malloc(sizeof(*a) * size);
	a[i] = c[i];
	i++;
	return (*a);
	}
	else
		return (NULL);
}

