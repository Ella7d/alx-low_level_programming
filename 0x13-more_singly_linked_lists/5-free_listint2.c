#include "lists.h"
#include <stdlib.h>
/**
 * free_listsint2 - frees lists
 * @head: headof list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;

	while ((current = temp) != NULL)
	{
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
