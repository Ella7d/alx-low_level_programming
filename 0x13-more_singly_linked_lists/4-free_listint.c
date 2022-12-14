#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
