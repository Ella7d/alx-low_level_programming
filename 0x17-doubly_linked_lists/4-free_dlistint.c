#include "lists.h"

/**
 * free_dlistint - free dlistint
 * @head: head of dlistint
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
	}
}
