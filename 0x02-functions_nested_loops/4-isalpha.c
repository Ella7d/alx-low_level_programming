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
	 
	for ((i = 'a'; i <= 'z'; i++) && (i = 'A'; i <= 'Z'; i++))
	if (c == i)
	{
	return (1);
	}
	return (0);
}

