#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node ata the end
 * @head: head f node
 * @n: element to be inserted
 * Return: node address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
			temp->next = new;
	}
	return (*head);
}
