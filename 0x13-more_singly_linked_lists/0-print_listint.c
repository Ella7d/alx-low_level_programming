#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print elements of list
 * @h: linked list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	register size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
