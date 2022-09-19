#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: 0
 *
 */
void print_rev(char *s)
{
	int i;
	int len;
	char s;
	for (i = len - 1; i >= 0; i--)
	{
	strrev(s[i]);	
	}
}
