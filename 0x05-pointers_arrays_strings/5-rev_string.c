#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: char type string
 * Return: 0
 *
 */
void rev_string(char *s)
{
	int i, length, mid;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		i = 0;
	mid = length / 2;
	while (mid--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}

