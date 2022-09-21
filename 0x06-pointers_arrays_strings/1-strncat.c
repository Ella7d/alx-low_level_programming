#include "main.h"
/**
 * _strncat - concantinate 2 strings upto n
 * @dest: string
 * @src: string
 * @n: string count
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char dest, src;
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
