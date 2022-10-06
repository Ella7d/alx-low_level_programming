#include "main.h"
#include <stdlib.h>
/**
 * *array_range - arranges array from min to max
 * @min: min values of array
 * @max:max val
 * Return: pointer to new array on success
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if(!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}


