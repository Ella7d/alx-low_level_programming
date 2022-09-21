#include "main.h"
/**
 * *string_toupper
 * @lc: string
 * Return: 0
 */
char *string_toupper(char *lc)
{
	int i;

	for (i = 'a'; lc[i] != '\0'; i++)
	{
		if (lc[i] >= 'a' && lc[i] <= 'z')
			lc[i] = lc[i] - 32;
	}
	return (lc);
}



