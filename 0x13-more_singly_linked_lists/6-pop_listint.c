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
	int dataa;

	if (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		dataa = temp->n;
		free(temp);
		return (dataa);
	}
	return (0);
}
