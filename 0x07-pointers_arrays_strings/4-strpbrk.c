#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s:string to search
 * @accept: bytes tosearch for
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
			return (s);
	s++;
	}
return (0);
}

