#include "main.hi"
#include <stdlib.h>
/**
 * *_calloc - allocates memory using calloc
 * @nmemb: size of block allocated
 * @size: byte size of memory allocated
 * Return: pointer if success, NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == 0)
	 {
		 return (NULL);
	 }
	 for (i = 0; i < (nmemb * size); i++)
		 arr[i] = 0;
		 return (arr);
}


