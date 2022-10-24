#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes list 
 * @head: head of node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head != NULL)
	{
		temp = *head;
	*head = temp->next;
	data = temp->n;
	return (data);
	}
	return (NULL);
}
