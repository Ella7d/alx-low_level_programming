#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copies string to allocated memory
 * @str: string to be coppied
 * Return: ptr of duplicate on succes , null if fail
 *
 */
char *_strdup(char *str)
{
	char s;
	unsigned int i, j;

	if (str == 0)
	{
		return ('\0');
	}
	for (i = 0; s[i] != 0; i++)
		;

	s = malloc(sizeof(*s) * (i + 1));
	if (s == 0)
	{
		return ('\0');
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}



