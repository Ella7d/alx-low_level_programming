#include "main.h"
/**
 * i_strncpy - copies one string into another upto n
 * @dest: string input
 * @src: string input
 * @n: string count
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
				

