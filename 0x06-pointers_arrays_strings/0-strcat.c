#include "main.h"
/**
 * *_strcat - concatinate strings
 * @dest: string
 * @src: string
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char dest, src;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		dest[i] = src[j];
		j++;
		dest[i] = '\0';
	}
	return (dest);
}
