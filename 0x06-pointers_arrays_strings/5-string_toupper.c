#include "main.h"
/**
 * *string_toupper
 *
 * Return: 0
 */
char *string_toupper(char *)
{
	char *lc;
	int n, i;

	for (i = 'a'; lc[i] != '\0'; i++)
	{
		if (lc[i] >= 'a' && lc[i] <= 'z')
			lc[i] = lc[i] - 32;
	}
}



