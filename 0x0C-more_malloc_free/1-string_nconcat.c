#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatinate strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: ptr to new address on success, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
	{
	}
	for (; s2[j] != '\0'; j++)
	{
	}
	if (n > j)
	{
		n = j;
	}
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == 0)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (; k < (i + n); k++)
	{
		s[k] = s2[k - i];
	}
	s[k] = '\0';
	return (s);
}


