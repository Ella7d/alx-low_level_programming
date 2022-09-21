#include "main.h"
/**
 * cap_string - capitalize every string
 * @s: string i/p
 * Return: 0
 *
 */
char *cap_string(char *c)
{
	int i, j;
       char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 97 && c[0] <= 122)
			c[0] = s[0] -32;
				for (j = 0; delimeters[j] != '\0'; j++)
					if (c[i] == sep[j] && c[i + 1] >= 97 && c[i + 1] <= 122)
						c[i + 1] = c[i + 1] - 32;
	}
	return (c);
}
