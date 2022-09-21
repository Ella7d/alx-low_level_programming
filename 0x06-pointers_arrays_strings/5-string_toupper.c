#include "main.h"
/**
 * string_toupper - change to lower case
 * @lc: string
 * Return: 0
 */
char *string_toupper(char *lc)
{
	int i;

	for (i = 0; lc[i] != '\0'; i++)
	{
		if (lc[i] >= 'a' && lc[i] <= 'z')
			lc[i] = lc[i] - 32;
	}
	return (lc);
}



