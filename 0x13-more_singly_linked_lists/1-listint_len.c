#include "lists.h"
/**
 * listint_len - elements count
 * @h: pointer to lists
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;

	}
	return (cnt);
}
