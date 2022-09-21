#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	char s1, s2;
	int i, j;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		if (s1[i] == s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (0);
		}
}

