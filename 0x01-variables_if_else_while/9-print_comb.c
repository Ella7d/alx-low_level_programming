#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Alaways 0 (sucsess)
 *
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	if (a!=10)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
}
