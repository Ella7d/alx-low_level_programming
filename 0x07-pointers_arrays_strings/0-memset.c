#include "main.h"
#include<string.h>
/**
 * _memset - memory settle
 * @s: pointer to a value of char to be filled
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] < n; i++)
	{
		s[i] = *b;
	}
	return (s);
}
