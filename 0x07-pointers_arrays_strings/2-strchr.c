#include "main.h"
#include <string.h>
/**
 * _strchr - searches for a string
 * @s: string to be scanned
 * @c: char to be searched
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
