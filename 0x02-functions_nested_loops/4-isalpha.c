#include "main.h"
/**
 * _isalpha - checks alpha
 * @c: int
 * Return: 0
 *
 */
int _isalpha(int c)
{
	 int i;
	 
	for ((i = 'a'; i <= 'z'; i++) || (j = 'A'; j <= 'Z'; j++))
	{
	if ((c == i) || (c == j))
	{
	return (1);
	}
	}
	return (0);
}

