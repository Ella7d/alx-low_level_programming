#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates old memory blcok to new
 * @ptr:pointer of previous memory
 * @old_size: size of old pointer
 * @new_size:size of new ptr
 * Return:ptr (success), NULL (failure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m = NULL;

	if (new_size == old_size)
		return (NULL);
	if (!ptr)
	{
		free(ptr);
	m = malloc(new size);
	return (m);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	m = malloc(new_size);
	_memcpy(m, ptr, old_size);
	free(ptr);
	return (m);
}

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: ptr of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;

	return (ptr);
}

