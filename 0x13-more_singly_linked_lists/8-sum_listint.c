#include "lists.h"
/**
 * sum_listint - sum of n data in liked list
 * @head: head of node
 * Return: 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
