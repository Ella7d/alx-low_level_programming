#include "main.h"

/**
 * _isdigit - checks if it a digit
 * @c: integer
 * Return: 1 (success) 0 (failure)
 *
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
