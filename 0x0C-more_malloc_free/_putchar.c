#include "main.h"
#include<unistd.h>
/**
 * _putchar - em
 * @c: char
 * Return: val
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
