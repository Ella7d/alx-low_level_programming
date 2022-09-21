#include "main.h"
/**
 * *_strncat - concantinate 2 strings upto n
 * @dest: string 
 * @src: string
 * @n: string count
 * Return: 0 
 * 
 */
char *_strncat(char *dest, char *src, int n)
{
	char dest, src;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
			if (src[j] < n)
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}
