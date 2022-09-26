#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string tobe searched in
 * @needle: string to searched for
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack != '\0'; haystack++)
	{
		for (i = 0; needle[i] != '\0'; i++)
			if (*haystack == needle[i])
				return (needle);
	}
	return (0);
}

