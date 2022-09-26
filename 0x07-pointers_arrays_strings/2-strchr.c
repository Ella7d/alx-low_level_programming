#include "main.h"
#include <string.h>
/**
 * _strchr - searches for a string
 * @s: string to be scanned
 * @c: char to be searched
 * Return: 
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	return (s);
	s++;
	}
	return (0);
}
