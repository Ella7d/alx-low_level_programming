#include "main.h"
#include <string.h>
/**
 * _memcpy - coppies memory area 
 * @dest: destination of the value being coppied
 * @src: value to be coppied
 * @n: number of bytes tobe coppied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
