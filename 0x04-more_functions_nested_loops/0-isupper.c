#include"main.h"

/**
 * _isupper - if char isuppercase or not
 * c: character input
 * Return: 1 (success) 0 (failure)
 *
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	
	}
}
