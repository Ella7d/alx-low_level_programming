#include "main.h"
/**
 * _islower - lc sort
 * @c: int
 * Return: 0
 *
 */
int _islower(int c)

{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
