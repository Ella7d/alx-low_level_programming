#include "main.h"

/**
 * reset_to_98 - update pointer value to 98
 * @*n: points to int
 * @m: integer
 * Return: int
 * 
 */
void reset_to_98(int *n)
{
	int *n;
	int m;

	m = 98;
	*n = &m;
	  reset_to_98(&m);
	
}	
