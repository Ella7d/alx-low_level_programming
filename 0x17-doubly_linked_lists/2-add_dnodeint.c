#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning of list
 * @head: pointer head
 * @n: intger number
 * Return: address of new element or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
