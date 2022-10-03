#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: new ptr on success, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	{
	for (i = 0; s1[i] != '\0'; i++)
		;
	}
	{
	for (j = 0; s2[j] != '\0'; j++)
		;
	}
	{
	k = i + j + 1;
	s = malloc(k * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
	{
		s[l] = s1[l];
	}
	
	for (l = 0; l < j; l++)
	{
		s[l + i] = s2[l];
	}

		s[i + j] = '\0';
		return (s);
}


