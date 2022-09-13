#include "main.h"
/**
 * _isalpha - checks alpha
 * @c: int
 * Return: 0
 *
 */
int _isalpha(int c)
{
	 int j, i;
	 
	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
	{
	return (1);
	}
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	if (j == c)
	{
	return (1);
	}
	}
	return (0);
}
