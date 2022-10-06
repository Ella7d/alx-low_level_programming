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
	char *o, *n;
	unsigned int i;
	void *m;

	if (new_size == old_size)
		return (NULL);

	if (ptr == NULL)
	{
		m = malloc(new size);

		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	n = m;
	for (i = 0; i < old_size && i < new_size; i++)
		n[i] = *o++;
	free(ptr);
	return (m);
}
