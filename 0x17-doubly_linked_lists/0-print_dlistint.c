#include "lists.h"
/**
 * print_distinct - prints all the elements of a list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nod++;
	}
	return (num_nod);
}
