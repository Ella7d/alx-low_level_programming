#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node ata the beginning
 * @head: head of the node
 * @n: element to be entered
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
	}
	else
	{
	return (NULL);
	}
}
