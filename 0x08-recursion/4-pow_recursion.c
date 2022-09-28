#include "main.h"
/**
 * _pow_recursion - gives power of a number
 * @x: base number
 * @y: power to base
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}