#include "lists.h"
/**
 * get_nodeint_at_index - return the nth element of a node
 * @head: head of a node
 * @index: position of the element
 * Return: the nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
