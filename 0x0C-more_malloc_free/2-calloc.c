#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


/**
 * *_calloc - allocates memory using calloc
 * @nmemb: size of block allocated
 * @size: byte size of memory allocated
 * Return: pointer if success, NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == 0)
	return (NULL);
	_memset(arr, 0, (size * nmemb));

	return (arr);
}
