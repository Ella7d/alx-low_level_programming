#include "main.h"
/**
 * *_strncpy - copies one string into another upto n
 * @dest: string input
 * @src: string input
 * @n: string count
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char dest, src;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0')
		if (dest[j] < n)
			src[j] = dest[i];
	}
	src[j] = '\0';
}
				

