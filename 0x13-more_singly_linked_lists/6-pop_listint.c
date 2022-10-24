#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes list 
 * @head: head of node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *new;

	if (head != NULL)
	{
	head->next = head;
	return (head);
	}
	return (NULL);
}
