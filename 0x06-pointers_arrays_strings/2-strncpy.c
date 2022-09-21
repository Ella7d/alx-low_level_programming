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

	for (i = 0; i < n; i++)
		{
			if (dest[i] != '\0')
			dest[i] = src[i];
		else
		{
		i++;
		dest[i] = '\0';
		}
		}
	return (dest);
}
				

