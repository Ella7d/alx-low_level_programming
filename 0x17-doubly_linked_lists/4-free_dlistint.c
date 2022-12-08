#include "lists.h"

/**
 * free_dlistint - free dlistint
 * @head: pointer head of dlistint
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
