#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generates keygen
 * Return: 0
 *
 */
int main(void)
{
	int n = 0, i = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		i = rand() % 128;
		if ((i + n) > 2772)
			break;
		i = i + n;
		printf("%i", n);
	}
	printf("%c\n", (2772 - i));
	return (0);
}

