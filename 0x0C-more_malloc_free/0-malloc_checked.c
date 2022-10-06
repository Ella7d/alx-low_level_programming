#include "main.h"
/**
 * *malloc_checked - allocates memory
 * @b: int value to be allocated
 * Return: ptr on success, 0 on failure
 *
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
		if (a == NULL)
		{
			exit(98);
		}
		return (a);
}

