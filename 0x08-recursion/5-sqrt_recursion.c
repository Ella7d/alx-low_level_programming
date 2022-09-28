#include "main.h"
/**
 * find_root - find square root of n
 * @n: number given
 * @root: try root
 * Return: n
 */
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - gives squareroot of a number
 * @n: number input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0 && n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (find_root(n, 0));
}

